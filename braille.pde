#include "letters.h"

void setup() {
  // initialize serial communication:
  Serial.begin(9600); 
  // initialize the LED pins:
  for (int thisPin = 2; thisPin <= 7; thisPin++) {
    pinMode(thisPin, OUTPUT);
  } 
}

void display(int a, int l)  {
  int i, j, k[6];
  for(i=1, j=l-1 ; i<=l; i++, j--)  {
    k[j] = a%10;
    a = a/10;      
  }

  for(i=0; i<l; i++)  {
    digitalWrite(k[i]+1,HIGH);
  }
}  


void loop() {
  int a,l;
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    a = conv(inByte);
    l = length(a);
    Serial.println(a, DEC);
    display(a,l);
    delay(1000);
    for (int thisPin = 2; thisPin <= 7; thisPin++) {
      digitalWrite(thisPin, LOW);
    }
    delay(500);

  }
}


