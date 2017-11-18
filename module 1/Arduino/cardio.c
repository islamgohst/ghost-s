#include "cardio.h"
#include <Arduino.h>

// Value of change threshold / la valeur de changement du seuil 
#define THRESHOLD_VALUE 650

void getFreqCardiac(Value *getValue, Time *getTime)
{
  
  getValue->currentValue = analogRead(0);

  // Part of the curve in which we are, we just need to know when we move to the next period / la partie du courbe o� on se trouve , on a juste besoin de savoir quand est ce on bouge pour la parochaine p�riode 
  if(getValue->currentValue > THRESHOLD_VALUE)
  {

    // Have we just entered ? est ce qu'on est entr� 
    if(getValue->oldValue <= THRESHOLD_VALUE)
    {

      // Recovery of time since program launch / r�cup�ration du temps avant que le programme se lance 
      getTime->detectTime = millis();

      // If the detection time is  greater than 200 ms it means that it is not only disturbance / Si le temps de d�tection est sup�rieur � 200 ms cela signifie que ce n'est pas seulement une perturbation
      if(getTime->detectTime > (getTime->oldTime + 200))
      {
        
        // calculating heart rate and assigning heartbeat / calcule le fr�quance cardiaque et assigner le rythme cardiaque
        getValue->heartbeat = ((1000.0*60.0)/(getTime->detectTime - getTime->oldTime),0);

        // The old time is replaced by the new / l'encien temps est remplac� par le nouveau 
        getTime->oldTime = getTime->detectTime;
        
      }
    }
  }

  // The old value is replaced by the new
  getValue->oldValue = getValue->currentValue;
}
