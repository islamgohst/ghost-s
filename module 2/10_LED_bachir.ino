
  //initialisation des variables
void setup() {
  pinLed1 = 2;
  pinLed2 = 3;
  pinLed3 = 4;
  pinLed4 = 5;
  pinLed5 = 6;
  pinLed6 = 7;
  pinLed7 = 8;
  pinLed8 = 9;
  pinLed9 = 10;
  pinLed10 = 11;
  
  //initialisation des modes
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);
  
  
 digitalWrite(pinLed1, LOW);
 digitalWrite(pinLed2, LOW);
 digitalWrite(pinLed3, LOW);
 digitalWrite(pinLed4, LOW);
 digitalWrite(pinLed5, LOW);
 digitalWrite(pinLed6, LOW);
 digitalWrite(pinLed7,  LOW);
 digitalWrite(pinLed8,  LOW);
 digitalWrite(pinLed9,  LOW);
 digitalWrite(pinLed10,  LOW);
  
  

}

void loop() {
  //test allumage et repérage des lEDs
  //LOW = ettenignement de la Led 
  //HIGH = alumage de la led
digitalWrite(pinLed1, HIGH); 

delay(100);
analogWrite(pinLed1, LOW);
  delay(100);
digitalWrite(pinLed2, HIGH);
delay(100);
digitalWrite(pinLed2, LOW);
  delay(100);
digitalWrite(pinLed3, HIGH);
delay(100);
digitalWrite(pinLed3, LOW );
delay(100);
digitalWrite(pinLed4, HIGH);
  delay(100);
 digitalWrite(pinLed4, LOW);
  delay(100);
digitalWrite(pinLed5,HIGH);
delay(100);

  digitalWrite(pinLed5, LOW);
  delay(100);
digitalWrite(pinLed6, HIGH);
delay(100);
digitalWrite(pinLed6, LOW);
  delay(100);
digitalWrite(pinLed7, HIGH);
delay(100);
 digitalWrite(pinLed7,  LOW);
  delay(100);
digitalWrite(pinLed8,  HIGH);
delay(100);
 digitalWrite(pinLed8,  LOW);
  delay(100);
digitalWrite(pinLed9,  HIGH);
delay(100);
digitalWrite(pinLed9,  LOW);
  delay(100);
digitalWrite(pinLed10,  HIGH);
delay(100);
digitalWrite(pinLed10,  LOW);
  delay(100);
 
}
