#include <Servo.h>

Servo barrera;

int trig = 9;
int echo = 10;

int ledVerde = 3;
int ledRojo = 4;

long duracion;

int distancia;

void setup(){

  pinMode(trig, OUTPUT);

  pinMode(echo, INPUT);

  pinMode(ledVerde, OUTPUT);

  pinMode(ledRojo, OUTPUT);

  barrera.attach(6);

  Serial.begin(9600);

}

void loop(){

  digitalWrite(trig, LOW);

  delayMicroseconds(2);

  digitalWrite(trig, HIGH);

  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  duracion = pulseIn(echo, HIGH);

  distancia = duracion * 0.034 / 2;

  Serial.println(distancia);

  if(distancia < 10){

    barrera.write(90);

    digitalWrite(ledVerde, HIGH);

    digitalWrite(ledRojo, LOW);

  }

  else{

    barrera.write(0);

    digitalWrite(ledVerde, LOW);

    digitalWrite(ledRojo, HIGH);

  }

  delay(500);

}
