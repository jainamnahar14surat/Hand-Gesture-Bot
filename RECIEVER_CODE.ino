#include<SPI.h>
#include<nRF24L01.h>
#include<RF24.h>

//float xaxis;
//float yaxis;
int spe = 130;
String s1 = "112";
String s2 = "789";
String s3 = "123";
String s4 = "456";
int in1=6;
int in2=5;
int in3=4;
int in4=3;

RF24 radio(7,8);
const byte address[6] = "00001";

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0,address);
  radio.setPALevel(RF24_PA_MIN);
  //radio.setDataRate(RF24_250KBPS);
  radio.startListening();
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop() {
  //digitalWrite(LED_BUILTIN, LOW);
  if(radio.available()){
    char text[32]="";
    radio.read(&text, sizeof(text));
  if(s1.compareTo(text)==0){
    analogWrite(in1,0);
    analogWrite(in2,spe);
    analogWrite(in3,spe);
    analogWrite(in4,0);  
    //digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("forward");
  }
  else if(s2.compareTo(text)==0){
    analogWrite(in1,spe);
    analogWrite(in2,0);
    analogWrite(in3,0);
    analogWrite(in4,spe);
    Serial.println("back"); 
  }
    else if(s3.compareTo(text)==0){
    analogWrite(in1,spe);
    analogWrite(in2,0);
    analogWrite(in3,spe);
    analogWrite(in4,0);  
    Serial.println("right");
  }
    else if(s4.compareTo(text)==0){
    analogWrite(in1,0);
    analogWrite(in2,spe);
    analogWrite(in3,0);
    analogWrite(in4,spe);  
    Serial.println("left");
  }
    else{
    analogWrite(in1,0);
    analogWrite(in2,0);
    analogWrite(in3,0);
    analogWrite(in4,0);  
    Serial.println("stop");
  }
  }
}
