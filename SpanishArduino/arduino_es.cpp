/*Libreria para programar en arduino con idioma español
Escrita por Ian Diaz en Enero del 2017

Version: 1.0.2
*/
#include "arduino_es.h"
#include "Arduino.h"



bool inicializarPin(unsigned int pin, char put)
{	
	bool error=true;
	if (pin < 255)
	{
		switch(put) 
		{
			case entrada:
				pinMode(pin, INPUT);
				error = false;
				break;
			case salida:
				pinMode(pin, OUTPUT);
				error=false;
				break;
		}
	}
	return error;
}

bool escribirDigital (unsigned int pin, char hl)
{
	bool error = true;
	if(pin <255)
	{
		switch(hl)
		{
			case encender:
				digitalWrite(pin, HIGH);
				error=false;
				break;
			case apagar:
				digitalWrite(pin, LOW);
				error=false;
				break;
		}
	}
	return error;
}

bool leerDigital (int pin)
{
	bool answer = false;
	char temp;
	temp = digitalRead(pin);
	switch(temp)
	{
		case HIGH:
			answer = true;
			break;
		case LOW:
			answer = false;
			break;
	}
	return answer;
}

void tempo (unsigned int cantidad)
{
	delay(cantidad);
	return;
}

unsigned int leerAnalogico (char pin)
{
	unsigned int answer;
	answer = analogRead(pin);
	return answer;
}

void escribirAnalogico (char pin, int value)
{
	analogWrite(pin, value);
	return;
}



