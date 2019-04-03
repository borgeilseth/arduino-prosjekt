//motor kontroller input pins

int ena = (6);
int in1 = (7);
int in2 = (5);
int enb = (3);
int in3 = (2);
int in4 = (4);
int motorSpeed = (255); //verdi mellom 0 og



/* Functions for Arduino Car **/
void motorSetup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void stopp() {
  analogWrite(ena, LOW);
  analogWrite(enb, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  //servoVinkel.write(80);
}

void fram() {
  analogWrite(ena, HIGH);
  analogWrite(enb, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //servoVinkel.write(80);
}

void bak() {
  analogWrite(ena, HIGH);
  analogWrite(enb, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  //servoVinkel.write(80);
}

void svingH() {
  analogWrite(ena, HIGH);
  analogWrite(enb, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  //servoVinkel.write(45);
}

void svingV() {
  analogWrite(ena, HIGH);
  analogWrite(enb, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //servoVinkel.write(125);
}




