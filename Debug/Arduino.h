#pragma once
//Libreria utilizada SOLAMENTE para debugear

#define INPUT	0
#define OUTPUT	1
#define HIGH	1
#define LOW		0

void pinMode(unsigned int pin, unsigned int IO);
void digitalWrite(unsigned int pin, unsigned int IO);
char digitalRead(unsigned int pin);
void delay(unsigned int time);
void delayMicroseconds(unsigned int);
unsigned int analogRead(unsigned int pin);
void analogWrite(unsigned int pin, unsigned int value);

long int micros();
long int milis();