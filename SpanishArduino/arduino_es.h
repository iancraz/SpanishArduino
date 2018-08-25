/*Libreria para programar en arduino con idioma español
Escrita por Ian Diaz en Enero del 2017

Version: 1.0.2
*/

#ifndef LIBRERIA_H
#define LIBRERIA_H

#define encender	1
#define apagar		0
#define entrada 	1
#define salida		0

bool inicializarPin(unsigned int pin, char put);	//TODAVIA NO ESTAN IMPEMENTADOS LOS PINES ANALOGICOS

/* Esta funcion se ingresa en el void setup, sirve para inicializar los pines como "entrada" o "salida". Devuelve una variable bool pos si se desea chequear
que e pasaje de parametros fue correcto.
Se utiliza de la siguiente manera.

	{
	...
	inicializarPin(5, salida);		 // Inicializo el pin 5 digital como una salida
	...
	}
...
*/

bool escribirDigital (unsigned int pin, char hl);

/* Esta funcion se la utiliza en el loop para encender o apagar pines digitales. Devuelve un boo por si se desea chequear que el pasaje de parametros haya
sidop correcto.
Se la utiliza de la siguiente manera:

	{
	...
	escribirDigital(5, encender);		//Enciendo el pin 5
	...
	}
*/

bool leerDigital (int pin);

/* Esta funcion sirve para leer el estado de pines digitales definidos como entrada anteriormente con la funcion
inicializarPin. devuelve un bool (true si esta encendido, false si esta apagado).
Se la utiliza de la siguiente manera:

	{
	...
	char valor;
	valor = leerDigital(5);		//Asigno a la variable valor el valor 1 o 0 dependiendo del estado del pin.
	...
	}
*/

void tempo (unsigned int cantidad);

/*Esta funcion sirve para detener el loop en milisegundos, se la utiliza como timer o temporizador.
Se la utiliza de la siguiente manera:
	{
	...
	tempo(1000);		//Detengo el programa por 1000 milisegundos
	...
	}
*/

unsigned int leerAnalogico (char pin);

/*Esta funcion sirve para leer los pines analogicos decalrados como entrada en la funcion InicializarPin().
En esta ocacion los pines Analogicos no toman los valores mencionados anteriormente(14,15,16,etc)
Ahora los valores para ingresar en esta funcion son:
A0 = 0
A1 = 1
A2 = 2
etc...

la funcion en lugar de leerDigital, devuelve valores entre 0 y 1023 	<--- IMPORTANTE A TENER EN CUENTA!!!

Se la utiliza de la suguiente manera:
	{
	...
	int lectura;
	lectura = leerAnalogico(0); 	//Asigno a la variable lectura el valor leido del pin A0.
	...
	}
*/

void escribirAnalogico (char pin, int value);

/*Funcion que sirve justamente para escribir los pines analogicos.
A diferencia de la funcion analogico que devuelve entre 0 y 1023, esta funcion se la puede llamar con valores desde 0 a 255
Se la utiliza de la siguiente manera:
	{
	...
	escribirAnalogico(3, 255); 		//Esribo en el pin A3, el valor de 255, es decir, encendido completamente.
	...
	}
*/

#endif
