int startValue=5;
int ledpin=13;

void flashled(int times){
    for(int i=0;i<times;i++){
   digitalWrite(13,1);
   delay (500);
   digitalWrite(13,0);
  delay (500);
}

}

void setup(){
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
  Serial.println("===Smart Countdown Starting===");


   int count=startValue;
  while (startValue>0){
  Serial.print("The count is ");
  Serial.println(startValue);
  flashled(startValue);

  delay(1000);
  startValue--;
  };
 Serial.print("===Countdown Complete===");
}

void loop(){

}