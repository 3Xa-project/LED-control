#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define LED1 D1
#define LED2 D2
#define LED3 D3
#define LED4 D4


char auth[]= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
char ssid[]= "a";
char pass[]= "307cc800";


BLYNK_WRITE(V1){
  if(param.asInt() == 1){
    digitalWrite(LED1,HIGH);
  }else{
    digitalWrite(LED1, LOW);
  }
}

BLYNK_WRITE(V2){
  if(param.asInt() == 1){
    digitalWrite(LED2, HIGH);
  }else{
    digitalWrite(LED2, LOW);
  }
}


BLYNK_WRITE(V3){
  if(param.asInt() == 1){
    digitalWrite(LED3 , HIGH);
  }else{
    digitalWrite(LED3,LOW);
  }
}


BLYNK_WRITE(V4){
  if (param.asInt() == 1){
    digitalWrite(LED4, HIGH);
  }else{
    digitalWrite(LED4,LOW);
  }
}

BLYNK_CONNECTED(){
  Blynk.syncAll();
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  Blynk.begin(auth, ssid,pass);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
