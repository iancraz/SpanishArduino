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

Contacto:   idiaz@itba.edu.ar
Version: 1.0.3
*/
#include "SpanishArduino.h"
#include "Arduino.h"



bool inicializarPin(no_sign entero pin, caracter put){
/*******************************************************
 * @resumen: Esta funcion se ingresa en el void setup, 
 * sirve para inicializar los pines como "entrada" o 
 * "salida". Devuelve una variable bool por si se 
 * desea chequear que el pasaje de parametros fue
 * correcto.
 * @param pin: Un pin del tipo entero no signado indicando
 * el pin con el que se desea trabajar.
 * @param put: Una variable que puede ser "salida" o "entrada"
 * dependiendo de como se quiera inicializar el pin.
 * @devuelve: devuelve true si todo fue bien, false en el caso
 * contrario.
 * @ejemplo:
 	{
	...
	inicializarPin(5, salida);		 // Inicializo el pin 5 digital como una salida
	...
	}
 * ****************************************************/
	bool error=true;
	if (pin < 255){
		switch(put){
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

bool escribirPinDigital (no_sign entero pin, caracter hl){
/*******************************************************
 * @resumen: Esta funcion se la utiliza en el loop para 
 * encender o apagar pines digitales. Devuelve un bool 
 * por si se desea chequear que el pasaje de parametros haya
 * sido correcto.
 * @param pin: Un pin del tipo entero no signado indicando
 * el pin con el que se desea trabajar.
 * @param hl: Una variable que puede ser "encender" o "apagar"
 * dependiendo de como se quiera setear el pin.
 * @devuelve: devuelve true si todo fue bien, false en el caso
 * contrario.
 * @ejemplo:
 	{
	...
	escribirDigital(5, encender);		//Enciendo el pin 5
	...
	}
 * ****************************************************/
	bool error = true;
	if(pin <255){
		switch(hl){
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

bool leerPinDigital (entero pin){
/*******************************************************
 * @resumen: Esta funcion sirve para leer el estado de pines
 * digitales definidos como entrada anteriormente con la 
 * funcion inicializarPin. 
 * @param pin: Un pin del tipo entero no signado indicando
 * el pin con el que se desea trabajar.
 * @devuelve: devuelve un bool (true si esta
 * encendido, false si esta apagado).
 * @ejemplo:
 	{
	...
	char valor;
	valor = leerDigital(5);		//Asigno a la variable valor el valor 1 o 0 dependiendo del estado del pin.
	...
	}

 * ****************************************************/
	bool answer = false;
	char temp;
	temp = digitalRead(pin);
	switch(temp){
		case HIGH:
			answer = true;
			break;
		case LOW:
			answer = false;
			break;
	}
	return answer;
}

nada temporizador (no_sign entero cantidad){
/*******************************************************
 * @resumen: Esta funcion sirve para detener el loop en 
 * milisegundos, se la utiliza como timer o temporizador. 
 * @param cantidad: Cantidad de milisegundos para detener
 * el programa.
 * @ejemplo:
 * 	{
 * 	...
 * 	tempo(1000);		//Detengo el programa por 1000 milisegundos
 * 	...
 * 	}
 * ****************************************************/
	delay(cantidad);
	return;
}

no_sign entero leerPinAnalogico (caracter pin){
/*******************************************************
 * @resumen: Esta funcion sirve para leer los pines 
 * analogicos decalrados como entrada en la funcion 
 * InicializarPin(). En esta ocacion los pines Analogicos 
 * no toman los valores mencionados anteriormente (14,15,
 * 16,etc). Ahora los valores para ingresar en esta 
 * funcion son:
 *	A0 = 0
 *	A1 = 1
 *	A2 = 2
 *	etc...
 *	La funcion en lugar de leerDigital, devuelve valores entre 0 y 1023 	<--- IMPORTANTE A TENER EN CUENTA!!!
 * @param pin: El pin con el que se quiere trabajar (A0,A1,A2,etc.)
 * @ejemplo:
 * 	{
 *	...
 *	int lectura;
 *	lectura = leerAnalogico(0); 	//Asigno a la variable lectura el valor leido del pin A0.
 *	...
 *	}
 * ****************************************************/
	return analogRead(pin);
}

nada escribirPinAnalogico (caracter pin, entero valor){
/*******************************************************
 * @resumen: Funcion que sirve justamente para escribir 
 * los pines analogicos. A diferencia de la funcion analogico
 * que devuelve entre 0 y 1023, esta funcion se la puede 
 * llamar con valores desde 0 a 255
 * @param pin: El pin con el que se quiere trabajar (A0,A1,A2,etc.)
 * @param valor: Valor con el cual se lo va a setear al pin
 * analógico, recordar que el valor debe ir desde 0 hasta 255.
 * @ejemplo:
 * 	{
 *	...
 *	escribirAnalogico(3, 255); 		//Esribo en el pin A3, el valor de 255, es decir, encendido completamente.
 *	...
 *	}
 * ****************************************************/
	analogWrite(pin, valor);
	return;
}

nada temporizadorMicroseg(no_sign entero cantidad){
/*******************************************************
 * @resumen: Esta funcion sirve para detener el loop en 
 * microsegundos, se la utiliza como timer o temporizador.
 * En el arduino uno, esto tiene una precisión de 3 micros.
 * @param cantidad: Cantidad de microsegundos para detener
 * el programa.
 * @ejemplo:
 * 	{
 * 	...
 * 	tempo(10000);		//Detengo el programa por 10000 microsegundos
 * 	...
 * 	}
 * ****************************************************/
	delayMicroseconds(cantidad);
	return;
}

largo entero microsegundos(nada){
/*******************************************************
 * @resumen: Funcion que devuelve la cantidad de microsegundos
 * que pasaron desde que el arduino empezo a correr el programa
 * actual. El numero vuelve a 0 despues de aproximadamente 70
 * minutos.
 * @devuelve: Cantidad de microsegundos que pasaron desde 
 * que el arduino empezo a correr el programa actual.
 * @ejemplo:
 * 	{
 *	...
	largo entero microsegundos_que_pasaron; 
 *	microsegundos_que_pasaron = microsegundos(); 		//Leo la cantidad de microsegundos que pasaron.
 *	...
 *	}
 * ****************************************************/
	return micros();
}

largo entero milisegundos(nada){
/*******************************************************
 * @resumen: Funcion que devuelve la cantidad de milisegundos
 * que pasaron desde que el arduino empezo a correr el programa
 * actual. El numero vuelve a 0 despues de aproximadamente 50
 * días.
 * @devuelve: Cantidad de milisegundos que pasaron desde 
 * que el arduino empezo a correr el programa actual.
 * @ejemplo:
 * 	{
 *	...
	largo entero milisegundos_que_pasaron; 
 *	milisegundos_que_pasaron = milisegundos(); 		//Leo la cantidad de milisegundos que pasaron.
 *	...
 *	}
 * ****************************************************/
	return milis();
}
