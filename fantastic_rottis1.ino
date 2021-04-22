#include <Servo.h>

int photores = 0;

int pirsen = 0;

int gassen = 0;

int forcesen = 0;

Servo servo_7;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  servo_7.attach(7, 500, 2500);

  pinMode(A2, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  photores = analogRead(A0);
  Serial.println(photores);
  if (photores < 100) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }

  pirsen = digitalRead(2);
  if (pirsen == 1) {
    tone(12, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    noTone(12);
  }

  gassen = analogRead(A1);
  Serial.println(gassen);
  if (gassen > 100) {
    servo_7.write(45);
  } else {
    servo_7.write(0);
  }

  forcesen = analogRead(A2);
  if (forcesen > 4) {
    tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    noTone(8);
  }
  delay(10); // Delay a little bit to improve simulation performance
}