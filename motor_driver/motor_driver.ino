// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor motorl(4);
AF_DCMotor motorr(3);
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motorl.setSpeed(120);
  motorr.setSpeed(120);
  motorl.run(RELEASE);
   motorr.run(RELEASE);
}

void loop() {
  int l = 150;
  int r= 60;
  Serial.println("f");
  
  motorl.run(FORWARD);
    motorl.setSpeed(l);  
     motorr.run(FORWARD);
    motorr.setSpeed(r);
  delay(1000);

  motorl.run(RELEASE);
   motorr.run(RELEASE);
  delay(1000);
 Serial.println("b");
  
  motorl.run(BACKWARD);
    motorl.setSpeed(l);  
     motorr.run(BACKWARD);
    motorr.setSpeed(r); 
  delay(1000);
  

}
