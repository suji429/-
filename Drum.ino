#include <CapacitiveSensor.h>

//CapacitiveSensor라이브러리를 사용하여 좌표값을 지정하여 객체생성

CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);        
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);        
CapacitiveSensor   cs_10_12 = CapacitiveSensor(10,12);   

int drum1;
int drum2;
int drum3;
int drum4;
byte ch = '9';

void setup()                    
{
   cs_2_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
   Serial.begin(9600);
}

void loop()                    
{
    //int start = millis();
    long total1 =  cs_2_4.capacitiveSensor(30);
    long total2 =  cs_2_6.capacitiveSensor(30);
    long total3 =  cs_2_8.capacitiveSensor(30);
    long total4 =  cs_10_12.capacitiveSensor(30);
    //각 드럼마다 특정값 이상으로 출력될 경우 그 건반 상태를 1로 변경(신체와 접촉 상태)
    //접촉이 없을 경우 건반 상태를 0으로 변경 한다.
    
    if(total1 > 100)  drum1 = 1;
    else             drum1 = 0;
    
    if(total2 > 40)  drum2 = 1;
    else             drum2 = 0;
    
    if(total3 > 100)  drum3 = 1;
    else             drum3 = 0;
  
    if(total4 > 150)  drum4 = 1;
    else             drum4 = 0;
    
    //시리얼 통신을 통해 프로세싱으로 전송
    
    Serial.write(ch);
    Serial.write(drum1);
    Serial.write(drum2); 
    Serial.write(drum3);
    Serial.write(drum4);
   
/*
    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing

    Serial.print(total1);                  // print sensor output 1
    Serial.print("\t");
    Serial.print(total2);                  // print sensor output 2
    Serial.print("\t");
    Serial.print(total3);                  // print sensor output 2
    Serial.print("\t");
    Serial.println(total4);                // print sensor output 3
*/
// 시리얼 모니터를 통해 상태값을 확인 할 수 있다.

    delay(10);                             // arbitrary delay to limit data to serial port        
}
