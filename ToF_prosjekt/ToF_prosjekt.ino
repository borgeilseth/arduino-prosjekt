//#include <Servo.h>
//Servo servoVinkel;

const int trigPin = 9;
const int echoPin = 10;

int speaker = 8;

int minsteAvstand = 50;

long duration;
int distance;

char val;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(speaker, OUTPUT);


  //servoVinkel.attach(11);

  motorSetup();

}


void loop() {

  //malAvstand();
  //Serial.println(distance);

  if (forKort()) {
    tuting();
    stopp();
    delay(500);
    noTone(speaker);
    svingH();
    delay(500);
  }

  if (Serial.available()) {
    val = Serial.read();

    //Serial.println(val);
    commando(val);

  }
}
