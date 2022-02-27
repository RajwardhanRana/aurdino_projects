#include<AFMotor.h>
AF_DCMotor motorR(2);
AF_DCMotor motorL(4);
void setup() 
{ pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  
  
 Serial.begin(9600);
 
 //motorR.run(RELEASE);
 motorR.setSpeed(60);

 motorL.setSpeed(60);
}

void loop() {int r,l;
r = digitalRead(A0);
l = digitalRead(A1);

if(r==0)
{
  if(l==1)
  {
    motorL.run(FORWARD);
    //motorL.setSpeed(0);
    motorR.run(BACKWARD);
    //motorR.setSpeed(255);
    //delay(1);
    //motorR.run(BACKWARD);
    //motorR.setSpeed(55);

    Serial.println("RIGHT");
  }
  else
  {
    
    motorR.run(BACKWARD);
    //motorR.setSpeed(255);
    
    motorL.run(BACKWARD);
    //motorL.setSpeed(255);
    //delay(1);
    //motorR.run(BACKWARD);
    //motorR.setSpeed(55);
    //motorL.run(BACKWARD);
    //motorL.setSpeed(55);
    Serial.println("straight");
  }
}
else
{
  if(l==1)
  {
    motorR.run(RELEASE);
    motorL.run(RELEASE);
    Serial.println("STOP");
  }
  else
  {
    motorR.run(FORWARD);
    //motorR.setSpeed(0);
    motorL.run(BACKWARD);
    //motorL.setSpeed(255);
    //delay(1);
    //motorL.run(BACKWARD);
    //motorL.setSpeed(55);
    Serial.println("LEFT");
  }
}

}
