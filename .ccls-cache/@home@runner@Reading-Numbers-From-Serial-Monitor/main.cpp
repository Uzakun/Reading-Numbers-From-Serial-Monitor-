int mynum;
String msg="How many blinks do you want: ";
String msg2="your LED blinking!!!";
int pin = 9;
int d=750;

void setup(){
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop(){
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
 
  mynum=Serial.parseInt();
  Serial.println(msg2);
   for (int j=1; j<=mynum; j++)
  {
    digitalWrite(pin, HIGH);
    delay(d);
    digitalWrite(pin, LOW);
    delay(d);
  }
  
  Serial.println("Your LED blinked,now give me money. X)");
  
}
