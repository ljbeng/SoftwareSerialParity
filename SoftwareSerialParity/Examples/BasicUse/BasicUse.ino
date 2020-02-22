
#include <SoftwareSerialParity.h>
#include <Arduino.h>

SoftwareSerialParity mySerial(3, 4); // RX, TX

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600, SERIAL_8O1);
  // mySerial.begin(9600, SERIAL_8E1);
  // mySerial.begin(9600, SERIAL_8N1);
  // The parity can be combined with bit lengths of 5..7 and 
  // stop bits 1 and 2 are also valid, e.g. SERIAL_7N2 or SERIAL_7E1
  // following the settings of the hardware serial.
   
}

void loop() {
  // put your main code here, to run repeatedly:
  mySerial.println("Hello Worlds");
  delay(1000);
}
