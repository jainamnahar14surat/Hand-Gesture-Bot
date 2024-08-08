#include<SPI.h>
#include<nRF24L01.h>
#include<RF24.h>
#include<Wire.h>

const int mpu = 0x68;
RF24 radio(7,8);
const byte address[6]="00001";
float xaxis, yaxis;

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
  Wire.begin();
  Wire.beginTransmission(mpu);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(mpu);
  Wire.write(0x1C);
  Wire.write(0x00);
  Wire.endTransmission();
}

void loop() {
  Wire.beginTransmission(mpu);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(mpu,6,true);

  xaxis = Wire.read()<< 8| Wire.read();
  yaxis = Wire.read()<< 8| Wire.read();
  Serial.print(xaxis);
  Serial.print(" , ");
  Serial.print(yaxis);
  Serial.println();
    if((yaxis<=-4000)||((yaxis>=4000)))
  {
    if((xaxis>=-4000)||((xaxis<=4000)))
    {
      if((yaxis<=-4000))
      {
         const char text[]="123"; //forward
         radio.write(&text,sizeof(text));
         Serial.println("right");
      }

      if((yaxis>=4000))
      {
          const char text[]="456"; //back
          radio.write(&text, sizeof(text)); 
          Serial.println("left");
      }
    }
  }
     else if((xaxis<=-4000)||((xaxis>=15000)))
    {
      Serial.println("l");
      if((xaxis<=-4000))
      {
         const char text[]="789";
         radio.write(&text, sizeof(text));
         Serial.println("back");
      }

      if((xaxis>=15000))
      {
         const char text[]="112";
        radio.write(&text, sizeof(text)); 
        Serial.println("forward");
      }
  }
    else{
       const char text[]="347";
       radio.write(&text, sizeof(text)); 
   }
}
