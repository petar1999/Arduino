#include<Arduino.h>



float duration, distance;



  double ocitanje_temperature(int trigPin, int echoPin)
{
  
  float duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance in centimeters: ");
  Serial.println(distance);
  Serial.print("Distance in inch: ");
  Serial.println(distance/2.54);
  delay(100);
  return (distance); // vracanje rezultata funkcije
}
