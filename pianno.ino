#include <CapacitiveSensor.h>
CapacitiveSensor cs_3_2 = CapacitiveSensor(3,2);
CapacitiveSensor cs_5_4 = CapacitiveSensor(5,4);
CapacitiveSensor cs_7_6 = CapacitiveSensor(7,6);
CapacitiveSensor cs_9_8 = CapacitiveSensor(9,8);
CapacitiveSensor cs_11_10 = CapacitiveSensor(11,10);


#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494    

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
long sensor_1 = cs_3_2.capacitiveSensorRaw(30);
long sensor_2 = cs_5_4.capacitiveSensorRaw(30);
long sensor_3 = cs_7_6.capacitiveSensorRaw(30);
long sensor_4 = cs_9_8.capacitiveSensorRaw(30);
long sensor_5 = cs_11_10.capacitiveSensorRaw(30);

Serial.println(sensor_1);
Serial.println(sensor_2);
Serial.println(sensor_3);
Serial.println(sensor_4);
Serial.println(sensor_5);

if(sensor_1>=30){
  tone(13,C,200);
}
if(sensor_2>=30){
  tone(13,D,200);
}
if(sensor_3>=30){
  tone(13,E,200);
}
if(sensor_4>=30){
  tone(13,F,200);
}
if(sensor_5>=30){
  tone(13,G,200);
}


}
