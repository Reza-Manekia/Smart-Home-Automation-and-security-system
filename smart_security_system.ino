int  IR_1 = 0;
int status_1 = HIGH;
int led_1 = 1;      //ROOM1
int led_2 = 2;     //ROOM2
int led_3 = 8;     //LOUNGE
int buzzer1 = 11;
int buzzer2 = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  
  pinMode(IR_1, INPUT);
 
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 status_1 = digitalRead(IR_1);
 

 if(status_1 == LOW){
  digitalWrite(led_1, HIGH);digitalWrite(led_2, HIGH);digitalWrite(led_3, HIGH);
  tone(buzzer1, HIGH);
  tone(buzzer2, HIGH);
  delay(150);

  digitalWrite(led_1,0);digitalWrite(led_2,0);digitalWrite(led_3,0);
  noTone(buzzer1);
  noTone(buzzer2);
  delay(150);
  }

 else{
  digitalWrite(led_1,0);digitalWrite(led_2, 0);digitalWrite(led_3,0);
  noTone(buzzer1);
  noTone(buzzer2);
  
  
  }

 
}
