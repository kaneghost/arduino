
#include <SoftwareSerial.h>
SoftwareSerial RFID(11, 12); // RX and TX
int i;
void setup() {
  // put your setup code here, to run once:
RFID.begin(9600);    // start serial to RFID reader
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //delay(1000);
//RFID.println("test");
if (RFID.available() > 0)
  {
   i = RFID.read();
   Serial.print(i, DEC);
   Serial.println(" ");
  }
}
