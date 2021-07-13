#include <CapacitiveSensor.h> 

#define speaker 12

// Set the Send Pin & Receive Pin.
CapacitiveSensor tap_2_4 = CapacitiveSensor(2,4);
CapacitiveSensor tap_2_5 = CapacitiveSensor(2,5);
CapacitiveSensor tap_2_6 = CapacitiveSensor(2,6);
CapacitiveSensor tap_2_7 = CapacitiveSensor(2,7);
CapacitiveSensor tap_2_8 = CapacitiveSensor(2,8);
CapacitiveSensor tap_2_9 = CapacitiveSensor(2,9);
CapacitiveSensor tap_2_10 = CapacitiveSensor(2,10);

void setup() {
  
  Serial.begin(9600);
}

void loop() {

  long start = millis();
  
  // Set the sensitivity of the sensors.
  long total = tap_2_4.capacitiveSensor(30);
  long total1 = tap_2_5.capacitiveSensor(30);
  long total2 = tap_2_6.capacitiveSensor(30);
  long total3 = tap_2_7.capacitiveSensor(30);
  long total4 = tap_2_8.capacitiveSensor(30);
  long total5 = tap_2_9.capacitiveSensor(30);
  long total6 = tap_2_10.capacitiveSensor(30);
  
  Serial.print(millis() - start);
  Serial.print("\t");
  Serial.print(total);
  Serial.print("\t");
  Serial.print(total1);
  Serial.print("\t");
  Serial.print(total2);
  Serial.print("\t");
  Serial.print(total3);
  Serial.print("\t");
  Serial.print(total4);
  Serial.print("\t");
  Serial.print(total5);
  Serial.print("\t");
  Serial.println(total6);
  
  if(total > 100)
  {
    tone(speaker, 523);
  }

  if(total1 > 100)
  {
    tone(speaker, 587);
  }

  if(total2 > 100)
  {
    tone(speaker, 659);
  }
  
  if(total3 > 100)
  {
    tone(speaker, 698);
  }
  
  if(total4 > 100)
  {
    tone(speaker, 784);
  }
  
  if(total5 > 100)
  {
    tone(speaker, 880);
  }
  
  if(total6 > 100)
  {
    tone(speaker, 988);
  }
  
  if(total <= 100 & total1 <= 100 & total2 <= 100 & total3 <= 100 & total4 <= 100 & total5 <= 100 & total6 <= 100)
  {
    noTone(speaker);
  }
  delay(50);
}
