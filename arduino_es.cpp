/*Libreria para programar en arduino con idioma español
Escrita por Ian Diaz en Enero del 2017

Version: 1.0.2
*/
#include "arduino_es.h"
#include "Arduino.h"

void inicializarPin(int pin, char put)
{
	if (put == ENTRADA)
	{
		pinMode(pin, INPUT);
	}
	else if (put == SALIDA)
	{
		pinMode(pin, OUTPUT);
	}
	return;
}

void escribirDigital (int pin, char hl)
{
	if (hl == ENCENDER)
	{
		digitalWrite(pin, HIGH);
	}
	else if (hl == APAGAR)
	{
		digitalWrite(pin, LOW);
	}
	return;
}

char leerDigital (int pin)
{
	char answer;
	answer = digitalRead(pin);
	return answer;
}

void tempo (int cantidad)
{
	delay(cantidad);
	return;
}

int leerAnalogico (char pin)
{
	int answer;
	answer = analogRead(pin);
	return answer;
}

void escribirAnalogico (char pin, int value)
{
	analogWrite(pin, value);
	return;
}



