//PIR Motion sensor interfacing
const int buz = 8;
const int PIRinput = 2;
const int led = 13;
int motion = 0;

void setup (){

pinMode(buz,OUTPUT);
pinMode (led,OUTPUT);
pinMode (PIRinput, INPUT);
}

void loop (){
  //reading the PIR status and stores to variable motion
motion = digitalRead(PIRinput);
if(motion == HIGH){
  tone(buz,1200);
  digitalWrite(led, HIGH);
  delay(100);
  noTone(buz);
  digitalWrite(led,LOW);
  delay(100);
}
else{
  noTone(buz);
  digitalWrite(led, LOW);
}
}
