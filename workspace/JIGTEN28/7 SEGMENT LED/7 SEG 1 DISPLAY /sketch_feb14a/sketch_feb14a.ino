#include <SevSeg.h>

int pina=2;
int pinb=3;
int pinc=4;
int pind=5;
int pine=6;
int pinf=7;
int ping=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(pina,OUTPUT);
  pinMode(pinb,OUTPUT);
  pinMode(pinc,OUTPUT);
  pinMode(pind,OUTPUT);
  pinMode(pine,OUTPUT);
  pinMode(pinf,OUTPUT);
  pinMode(ping,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pina,LOW);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,HIGH);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,LOW);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,LOW);
  digitalWrite(pind,LOW);
  digitalWrite(pine,LOW);
  digitalWrite(pinf,LOW);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,LOW);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,HIGH);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,LOW);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,LOW);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,LOW);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,LOW);
  digitalWrite(pind,LOW);
  digitalWrite(pine,LOW);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,LOW);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,LOW);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,HIGH);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,LOW);
  delay(1000);

  digitalWrite(pina,LOW);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,LOW);
  digitalWrite(pind,LOW);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,LOW);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,HIGH);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,HIGH);
  delay(1000);

  digitalWrite(pina,HIGH);
  digitalWrite(pinb,HIGH);
  digitalWrite(pinc,HIGH);
  digitalWrite(pind,LOW);
  digitalWrite(pine,HIGH);
  digitalWrite(pinf,HIGH);
  digitalWrite(ping,HIGH);
  delay(1000);

}
