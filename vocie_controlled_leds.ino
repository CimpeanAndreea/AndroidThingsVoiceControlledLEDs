#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;   // the pins on Arduino board used for lcd display
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);    // initialize lcd

#define GREEN_LED 2   // the pin on Arduino board used for green led
#define RED_LED 3   // the bin

String command;   // the voice command
int TxD = 11;   // transmit serial data pin for bluetooth module
int RxD = 10;   // receive serial data for bluetooth module

SoftwareSerial bluetooth(TxD, RxD);

void setup() {
  // init
  pinMode(GREEN_LED, OUTPUT); // configure
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600); // set the data rate in bits per second for serial data tranmission
  bluetooth.begin(9600);
  lcd.begin(16, 2); // spcify the number of rows and columns of the lcd and initalize it
}

void loop() {
    lcd.setCursor(0, 1);
    if (bluetooth.available())
    {
      lcd.clear(); //clear the display
      command = bluetooth.readString(); // get the command
      command.toLowerCase();
      Serial.println(command);

      if (command == "all on"){
        digitalWrite(GREEN_LED, HIGH); // turn on led
        digitalWrite(RED_LED, HIGH);  
        lcd.print("LEDS ON!");  //print message on lcd display
      }
      
      if (command == "all off"){
        digitalWrite(GREEN_LED, LOW); 
        digitalWrite(RED_LED, LOW);     
        lcd.print("LEDS OFF!");
      }
      
      if (command == "red led on"){
        digitalWrite(RED_LED, HIGH); 
        lcd.print("RED ON!");
      }

      if (command == "green led on"){
        digitalWrite(GREEN_LED, HIGH); 
        lcd.print("GREEN ON!");
      }
      
      if (command == "red led off"){
        digitalWrite(RED_LED, LOW); 
        lcd.print("RED OFF!");
      }
      
      if (command == "green led off"){
        digitalWrite(GREEN_LED, LOW);   
        lcd.print("GREEN OFF!");
      }
  }
}
