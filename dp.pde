import processing.serial.*;
import ddf.minim.spi.*;
import ddf.minim.signals.*;
import ddf.minim.*;
import ddf.minim.analysis.*;
import ddf.minim.ugens.*;
import ddf.minim.effects.*;
Minim minim = new Minim(this);
AudioSample playDrum1;
AudioSample playDrum2;
AudioSample playDrum3;
AudioSample playDrum4;

int drum1;
int drum2;
int drum3;
int drum4;
int last_drum1;
int last_drum2;
int last_drum3;
int last_drum4;
  
Serial myPort;
void setup(){
  println(Serial.list());
  myPort = new Serial(this, Serial.list()[2],9600);
  playDrum1 = minim.loadSample("drum1.mp3");
  playDrum2 = minim.loadSample("drum2.mp3");
  playDrum3 = minim.loadSample("drum3.mp3");
  playDrum4 = minim.loadSample("drum4.mp3");
  
  last_drum1 = 0;
  last_drum2 = 0;
  last_drum3 = 0;
  last_drum4 = 0;
}
void draw(){
  
  if(myPort.available() >=1) {      
    if(myPort.read() == '9') { 
      drum1 = myPort.read();
      drum2 = myPort.read();
      drum3 = myPort.read();
      drum4 = myPort.read();
    } 
  }
  background(255);
  
  print(drum1);
  print(" ");
  print(drum2);
  print(" ");
  print(drum3);
  print(" ");
  print(drum4);
  println(" ");
  
 if(drum1 > 0) {
    if(last_drum1 <= 0) {
      playDrum1.trigger();
      last_drum1 = 1;
    }
  }
  else{
    last_drum1 = 0;
  }
   if(drum2 > 0) {
    if(last_drum2 <= 0) {
      playDrum2.trigger();
      last_drum2 = 1;
    }
  }
  else{
    last_drum2 = 0;
  }
   if(drum3 > 0) {
    if(last_drum3 <= 0) {
      playDrum3.trigger();
      last_drum3 = 1;
    }
  }
  else{
    last_drum3 = 0;
  }
  if(drum4 > 0) {
    if(last_drum4 <= 0) {
      playDrum4.trigger();
      last_drum4 = 1;
    }
  }
  else{
    last_drum4 = 0;
  }
}
