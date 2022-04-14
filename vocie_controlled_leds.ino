#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define GREEN_LED 2
#define RED_LED 3 
String value;
int TxD = 11;
int RxD = 10;
int servoposition;
SoftwareSerial bluetooth(TxD, RxD);

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
    lcd.setCursor(0, 1);
 if (bluetooth.available())
   {
    value = bluetooth.readString();
    value.toLowerCase();
     Serial.println(value);

    if (value == "all on"){
     Serial.println("all LED turn on");

    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, HIGH);  
        lcd.print("LEDS ON!");

      }

    if (value == "all off"){
      digitalWrite(GREEN_LED, LOW); 
      digitalWrite(RED_LED, LOW);     
          lcd.print("LEDS OFF!");
  
      }

    if (value == "red led on"){
    digitalWrite(RED_LED, HIGH); 
        lcd.print("RED ON!");

      }

    if (value == "green led on"){
      digitalWrite(GREEN_LED, HIGH); 
          lcd.print("GREEN ON!");
      
      }
      
    if (value == "red led off"){
    digitalWrite(RED_LED, LOW); 
        lcd.print("RED OFF!");

      }

    if (value == "green led off"){
      digitalWrite(GREEN_LED, LOW);   
      lcd.print("GREEN OFF!");
    
      }

 }

}
