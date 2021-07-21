#include <CapacitiveSensor.h>

//CapacitiveSensor라이브러리를 사용하여 좌표값을 지정하여 객체생성
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        
CapacitiveSensor   cs_6_7 = CapacitiveSensor(6,7);        
CapacitiveSensor   cs_6_8 = CapacitiveSensor(6,8);        
CapacitiveSensor   cs_6_9 = CapacitiveSensor(6,9);
CapacitiveSensor   cs_10_11 = CapacitiveSensor(10,11);        
CapacitiveSensor   cs_10_12 = CapacitiveSensor(10,12);       

int Do;
int Re;
int Mi;
int Pa;
int Sol;
int Ra;
int Si;
int Do_1;

byte ch = '9';

void setup()                    
{
   cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);
   Serial.begin(9600);
}

void loop()                    
{                                                                                                                                                                                                           
    long total1 =  cs_2_3.capacitiveSensor(30);
    long total2 =  cs_2_4.capacitiveSensor(30);
    long total3 =  cs_2_5.capacitiveSensor(30);
    long total4 =  cs_6_7.capacitiveSensor(30);
    long total5 =  cs_6_8.capacitiveSensor(30);
    long total6 =  cs_6_9.capacitiveSensor(30);
    long total7 =  cs_10_11.capacitiveSensor(30);
    long total8 =  cs_10_12.capacitiveSensor(30);
    //각 건반마다 특정값 이상으로 출력될 경우 그 건반 상태를 1로 변경(신체와 접촉 상태)
    //접촉이 없을 경우 건반 상태를 0으로 변경
    if(total1 > 5000)  Do = 1;
    else             Do = 0;
    
    if(total2 > 5000)  Re = 1;
    else             Re = 0;
    
    if(total3 > 5000)  Mi = 1;
    else             Mi = 0;
   
    if(total4 > 5000)  Pa = 1;
    else             Pa = 0;
    
    if(total5 > 5000)  Sol = 1;
    else             Sol = 0;

    if(total6 > 5000)  Ra = 1;
    else             Ra = 0;

    if(total7 > 5000)  Si = 1;
    else             Si = 0;
    
    if(total8 > 5000)  Do_1 = 1;
    else             Do_1 = 0;

    //시리얼 통신을 통해 프로세싱으로 전송
    Serial.write(ch);
    Serial.write(Do);
    Serial.write(Re);
    Serial.write(Mi);
    Serial.write(Pa);
    Serial.write(Sol);
    Serial.write(Ra);
    Serial.write(Si);
    Serial.write(Do_1);
    
    delay(10);                             
}
