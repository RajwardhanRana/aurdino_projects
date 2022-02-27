void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}
int i;
void loop() {
  // put your main code here, to run repeatedly:
i = digitalRead(4);
digitalWrite(13,i);
Serial.println(i);

}
