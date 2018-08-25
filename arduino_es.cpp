/*
This file is part of SpanishArduino.

SpanishArduino is a library to learn programming on Arduino without knowing english
Copyright (C) 2018  Ian Cruz Diaz

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

Version: 1.0.3
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
