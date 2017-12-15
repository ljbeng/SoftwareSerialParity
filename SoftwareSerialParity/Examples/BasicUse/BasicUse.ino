
#include <SoftwareSerialParity.h>
SoftwareSerialParity mySerial(2, 3); // RX, TX  (3, 2) for first pro mini boards 

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600,ODD);
  //mySerial.begin(9600,EVEN);
  //mySerial.begin(9600,NONE);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  mySerial.println("Hello Worlds");
  delay(1000);
}
