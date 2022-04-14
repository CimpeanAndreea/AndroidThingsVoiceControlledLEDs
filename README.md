# 1. Project Description
	This projects aims to implement a simple voice command controller of LEDs. 
	The idea of having controlled lights is very popular nowadays and this project shows a simple approach in order to achieve this.
	
	The project consists in a smartphone that uses a voice recognition app to capture a voice command, 
	it then sends the captured voice command to a Bluetooth module which communicates with an Arduino Uno board 
	that can further transmit the command to the LEDs.
	
	For a more interesting and complex experience I also integrated a LCD display to show as text the last command given.
	
	
# 2. Schematics
	![Alt text](VoiceCotnrolledLEDsSketch_bb.png?raw=true "Title")

# 3. Pre-Requisites
	- Arduino UNO R3 Controller Board
		○ https://docs.arduino.cc/hardware/uno-rev3
	- Breadboard 830
		○ https://www.digikey.com/catalog/en/partgroup/full-size-breadboard-830-tie-points/68965
	- Red & Green LEDs (5pcs)
	- Bluetooth HC-05 Module
		○ https://www.rhydolabz.com/wireless-bluetooth-ble-c-130_132/hc05-bluetooth-module-masterslave-p-1169.html
	- LCD1602 Module ( with pin header)
		○ http://wiki.sunfounder.cc/index.php?title=LCD1602_Module
	- Potentiometer
	- 3 x Resistors 220 ohm
		○ https://protosupplies.com/product/resistor-220-ohm-5-14w25-pack/
	- Jumper Wires
	- Voice recognition app on an Android phone (there are similar apps for iOS)
		○ https://play.google.com/store/apps/details?id=appinventor.ai_ashishmarch12.Bluetooth_Voice&hl=en
	- Arduino IDE
		○ https://www.arduino.cc/en/software
# 4. Setup and build
	1. Connect all components as per the circuit diagram
	2. Open the Voice Recognition App and click on the Bluetooth icon to connect to the Bluetooth module 
	(when connecting for the first time the smartphone will ask for a passcode - use 0000 or 1234)
# 5. Running
	After the setup the project can be run as follows:
		1. In the voice recognition app tap the button "click to speak"
		2. The following commands are available:

| Command       | Action              |
| ------------- | ------------------- |
| All on        | Both LEDs turn on   |
| All off	    | Both LEDs turn off  |
| Red LED on	| Red LED turns on    |
| Green LED on	| Green LED turns on  |
| Red LED off	| Red LED turns off   |
| Green LED off	| Green LED turns off |

		3. If a correct command was given, the corresponding action will take place 
		and a message with the command will also appear on the LCD display 
# 6. Demo
