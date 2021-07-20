import processing.serial.*;
import ddf.minim.spi.*;
import ddf.minim.signals.*;
import ddf.minim.*;
import ddf.minim.analysis.*;
import ddf.minim.ugens.*;
import ddf.minim.effects.*;
Minim minim = new Minim(this);
AudioSample playDo;
AudioSample playRe;
AudioSample playMi;
AudioSample playPa;
AudioSample playSol;
AudioSample playRa;
AudioSample playSi;
AudioSample playDo_1;
int wait;
int Do;
int Re;
int Mi;
int Pa;
int Sol;
int Ra;
int Si;
int Do_1;
  int Last_Do;
  int Last_Re;
  int Last_Mi;
  int Last_Pa;
  int Last_Sol;
  int Last_Ra;
  int Last_Si;
  int Last_Do_1;
  
Serial myPort;
void setup(){
  println(Serial.list());
  myPort = new Serial(this, Serial.list()[0],9600);
  playDo = minim.loadSample("do.mp3");
  playRe = minim.loadSample("re.mp3");
  playMi = minim.loadSample("mi.mp3");
  playPa = minim.loadSample("pa.mp3");
  playSol = minim.loadSample("sol.mp3");
  playRa = minim.loadSample("ra.mp3");
  playSi = minim.loadSample("si.mp3");
  playDo_1 = minim.loadSample("do_1.mp3");
  Last_Do = 0;
  Last_Re = 0;
  Last_Mi = 0;
  Last_Pa = 0;
  Last_Sol = 0;
  Last_Ra = 0;
  Last_Si = 0;
  Last_Do_1 = 0;
}
void draw(){
  
  if(myPort.available() >=1) {      
    if(myPort.read() == '9') { 
      Do = myPort.read();
      Re = myPort.read();
      Mi = myPort.read();
      Pa = myPort.read();
      Sol = myPort.read();
      Ra = myPort.read();
      Si = myPort.read();
      Do_1 = myPort.read();
    } 
  }
  background(255);
  print(Do);
  print(" ");
  print(Re);
  print(" ");
  print(Mi);
  print(" ");
  print(Pa);
  print(" ");
  print(Sol);
  print(" ");
  print(Ra);
  print(" ");
  print(Si);
  print(" ");
  print(Do);
  println(" ");
 if(Do > 0) {
    if(Last_Do <= 0) {
      playDo.trigger();
      Last_Do = 1;
    }
  }
  else{
    Last_Do = 0;
  }
  
if(Re > 0) {
    if(Last_Re <= 0) {
      playRe.trigger();
      Last_Re = 1;
    }
  }
  else{
    Last_Re = 0;
  }
  
   if(Mi > 0) {
    if(Last_Mi <= 0) {
      playMi.trigger();
      Last_Mi = 1;
    }
  }
  else{
    Last_Mi = 0;
  }
  
    if(Pa > 0) {
    if(Last_Pa <= 0) {
      playPa.trigger();
      Last_Pa = 1;
    }
  }
  else{
    Last_Pa = 0;
  }
  
 if(Sol > 0) {
    if(Last_Sol <= 0) {
      playSol.trigger();
      Last_Sol = 1;
    }
  }
  else{
    Last_Sol = 0;
  }
  
  if(Ra > 0) {
    if(Last_Ra <= 0) {
      playRa.trigger();
      Last_Ra = 1;
    }
  }
  else{
    Last_Ra = 0;
  }
  
   if(Si > 0) {
    if(Last_Si <= 0) {
      playSi.trigger();
      Last_Si = 1;
    }
  }
  else{
    Last_Si = 0;
  }
  
   if(Do_1 > 0) {
    if(Last_Do_1 <= 0) {
      playDo_1.trigger();
      Last_Do_1 = 1;
    }
  }
  else{
    Last_Do_1 = 0;
  }
}
