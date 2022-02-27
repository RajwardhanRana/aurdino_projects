#include<AFMotor.h>
AF_DCMotor motorR(3);

void setup() 
{ pinMode(A0,INPUT);
  
  
  
 Serial.begin(9600);
 
 motorR.run(RELEASE);
 
}

void loop() {int i;
i = digitalRead(A0);
if(i==1){ motorR.run(FORWARD);
    motorR.setSpeed(120);
  
}
else{ motorR.run(RELEASE);}
Serial.print(i);}
