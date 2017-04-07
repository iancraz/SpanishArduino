/*Libreria para programar en arduino con idioma español
Escrita por Ian Diaz en Enero del 2017

Version: 1.0.2
*/

#ifndef LIBRERIA_H
#define LIBRERIA_H

#define ENCENDER	1
#define APAGAR		0
#define ENTRADA 	1
#define SALIDA	0

void inicializarPin(int pin, char put);

/* Esta funcion se ingresa en el void setup, sirve para inicializar los pines como ENTRADA o SALIDA
Se utiliza de la siguiente manera.

	{
	...
	inicializarPin(5, SALIDA);		 // Inicializo el pin 5 digital como una salida
	...
	}

Si se quiere inicializar pines analogicos, como por ejemplo A0, A1, A2, etc. se le cambia el numero
A0 = 14
A1 = 15
...
*/

void escribirDigital (int pin, char hl);

/* Esta funcion se la utiliza en el loop para encender o apagar pines digitales, se la utiliza de la siguiente manera:

	{
	...
	escribirDigital(5, ENCENDER);		//Enciendo el pin 5
	...
	}
*/

char leerDigital (int pin);

/* Esta funcion sirve para leer el estado de pines digitales definidos como entrada anteriormente con la funcion
inicializarPin.
Se la utiliza de la siguiente manera:

	{
	...
	char valor;
	valor = leerDigital(5);		//Asigno a la variable valor el valor 1 o 0 dependiendo del estado del pin.
	...
	}
*/

void tempo (int cantidad);

/*Esta funcion sirve para detener el loop en milisegundos, se la utiliza como timer o temporizador.
Se la utiliza de la siguiente manera:
	{
	...
	tempo(1000);		//Detengo el programa por 1000 milisegundos
	...
	}
*/

int leerAnalogico (char pin);

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
