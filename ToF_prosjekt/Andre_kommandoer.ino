
void tuting() {
  tone(speaker, 523.25);
}


bool forKort() {
  //Avstandsmåling
  digitalWrite(trigPin, LOW);
  delayMicroseconds(20);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(40);
  digitalWrite(trigPin, LOW);


  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance < minsteAvstand) {
    return true; ;
  } else {
    return false;
  }
}


/*
void automatisk() {
  fram();
  delay(200);
  malAvstand();
  if (forKort) {
    if (random(2) == 1) {
      svingH();
      delay(1000);
    }

  }
} */

