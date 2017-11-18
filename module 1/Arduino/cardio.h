#include<Arduino.h>
#ifndef P_H_INCLUDED
#define P_H_INCLUDED

typedef struct Value Value;
struct Value
{
  
  // Old value/ancienne valeur 
  int oldValue;

  // Value of the IR/ valeur de phototransistor
  int currentValue;

  // Heart rate in beats per minute / rythme cardiaque par minute 
int heartbeat;
};

typedef struct Time Time;
struct Time
{

  // Detection time of the previous value / détection du temps de la valeur précédente 
  long oldTime;

  // Time of detection of the value / temps de detection de la valuer 
  long detectTime;
};

void getFreqCardiac(Value *getValue, Time *getTime);

#endif // P_H_INCLUDED
