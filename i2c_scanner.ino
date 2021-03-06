// I2C scanner for M430G2553
// Added  Wire.write(1);  for sketch to work.
// Grant Forest May 2014
#include <Wire.h>
uint8_t error, address;
void setup () {
    Serial.begin(9600);
    Serial.println("G'Day MyI2C_ScannerV1");
    Wire.setModule(1); ///////////////////////////////////// this is the point of use I2C SDA,SCL = p2.2 p2.1
    Wire.begin();
 
}
void loop () {
  Serial.print(" Scanning...");
  for(address = 1; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    // Wire.write(1);  ///////////////////////////////////// sketch works ok when this line added
    error = Wire.endTransmission();
    if (error==0) {
      Serial.print("Found Address 0x");
      if (address<15) Serial.print('0');
      Serial.print(address,HEX);
      Serial.print(", ");
      }
  }   
   
  Serial.println();  
  delay(2000);
}
