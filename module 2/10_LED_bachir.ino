#include "param.h"
int ledPins[10] = {8,6,5,10,9,3,11,2,7,4};

boolean affichage[38][10]={   
  1,1,1,1,1,1,1,1,1,1,//tout allumé   
  0,0,0,0,0,0,0,0,0,0,   
  1,0,1,0,1,0,1,0,1,0,//1 sur 2   
  0,1,0,1,0,1,0,1,0,1,//1 sur 2   
  1,0,0,1,0,0,1,0,0,1,//5 et 1 sur 3  
  0,1,0,0,1,0,0,1,0,0,//1 sur 3   
  0,0,1,0,0,1,0,0,1,0,//1 sur 3   
  1,0,0,0,1,0,0,0,1,0,//1 sur 4   
  0,1,0,0,0,1,0,0,0,1,//1 sur 4   
  0,0,1,0,0,0,1,0,0,0,//10 et 1 sur 4   
  0,0,0,1,0,0,0,1,0,0,//1 sur 4   
  1,0,0,0,0,1,0,0,0,0,//1 sur 5   
  1,0,0,0,0,0,1,0,0,0,//1 sur 6   
  1,0,0,0,0,0,0,1,0,0,//1 sur 7   
  1,0,0,0,0,0,0,0,1,0,//15 et 1 sur 8   
  1,0,0,0,0,0,0,0,0,1,//1 sur 9   
  1,0,0,0,0,0,0,0,0,0,//1 sur 10   
  0,0,0,0,0,0,0,0,0,1,//dans le sens inverse   
  0,0,0,0,0,0,0,0,1,0,   
  0,0,0,0,0,0,0,1,0,0,//20   
  0,0,0,0,0,0,1,0,0,0,   
  0,0,0,0,0,1,0,0,0,0,   
  0,0,0,0,1,0,0,0,0,0,   
  0,0,0,1,0,0,0,0,0,0,   
  0,0,1,0,0,0,0,0,0,0,//25   
  0,1,0,0,0,0,0,0,0,0,   
  1,0,0,0,0,0,0,0,0,0,//fin du sens inverse   
  0,0,0,0,0,0,0,0,0,0,//tout eteint   
  1,0,0,0,0,0,0,0,0,0,//bon sens un par un   
  0,1,0,0,0,0,0,0,0,0,//30   
  0,0,1,0,0,0,0,0,0,0,   
  0,0,0,1,0,0,0,0,0,0,   
  0,0,0,0,1,0,0,0,0,0,   
  0,0,0,0,0,1,0,0,0,0,   
  0,0,0,0,0,0,1,0,0,0,//35   
  0,0,0,0,0,0,0,1,0,0,   
  0,0,0,0,0,0,0,0,1,0,   
  0,0,0,0,0,0,0,0,0,1,};//fin du bon sens

  

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<10;i++)
  {
    pinMode(ledPins[i],OUTPUT);
    digitalWrite(ledPins[i],LOW);
}
}
void loop(){
  // put your main code here, to run repeatedly:
  for (int i=0;i<4;i++)
  {
    for (int p=0;p<10;p++)
    {
      boolean etat=affichage[i][p];
      digitalWrite(ledPins[p],etat);
    }

    delay(500);
  }
}
