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

#ifndef ES_H
#define	ES_H

#define mientras(x)	while(x)
/* Directiva de flujo de programa, Mientras suceda cierta condicion se va a ejecutar cierto codigo
Ejemplo:
	{
		mientras(x<10)
		{
			x++;		//Lo que hace este codigo es incrementar el valor de x hasta que este supere el valor de 10
		}
	}

*/

#define si(x)		if(x)
/* Directiva de flujo de programa, si sucede cierta condicion se va a ejecutar cierto codigo(La diferencia con mientras es que el chequeo de
la condicion solo lo va a hacer una vez)
Ejemplo:
	{
		si(x<10)
		{
			x = 10;		//Lo que hace este codigo es chequear si x es menor a 10, y si es asi, le asigna a x el valor de 10.
		}
	}

*/
#define	o_si(x)		else if(x)
/* Directiva de flujo de programa, es para concatenar cadenas de "si"
Ejemplo:
	{
		si(x<10)
		{
			x = 10;		//Lo que hace este codigo es primero chequea si x es menor a 10, si es asi le asigna el valor de 10
		}				//En el caso de que x no sea menor a 10, chequea si es mayor a 10, si es asi le asigna 20.
		o_si(x>10)
		{
			x = 20;		//
		}
	}

*/
#define otro		else
/* Directiva de flujo de programa, es como un o_si pero sin condicion, es decir si no se cumplen los "si" puestos anteriormente, se va a
ejecutar este codigo
Ejemplo:
	{
		si(x<10)
		{
			x = 10;		//Lo que hace este codigo es primero chequea si x es menor a 10, si es asi le asigna el valor de 10
		}				//En el caso de que x no sea menor a 10, chequea si es mayor a 10 y menor a 20, si es asi le asigna 20.
		o_si((x>10)&&(x<20))
		{
			x = 20;
		}
		otro			//Si x no cumple ninguna de las condiciones anteriores, se ejecuta este codigo, que asigna 100 de valor a x
		{
			x = 100;
		}

	}

*/
#define	chequeo(x)	switch(x)
/*Directiva de flujo de programa, lo que hace es chequear una variable, ¡NO una condicion!
Se la utiliza junto a "caso(x)", por eso el ejemplo se va a encontrar abajo.
*/
#define caso(x)		case (x)
/*Directiva de flujo de programa, se la utiliza junto a "chequeo(x)"
Ejemplo:
	{
		chequeo(x)									//Lo que hace este codigo es chequear el valor de x, y si es 1 imprime x tiene el valor de 1
		{											//en pantalla, si es 2 imprime x tiene el valor de 2 y si no es ninguno de esos 2 valores
			caso(1):								//imprime x tiene otro valor.
				printf("x tiene el valor de 1");
				break;
			caso(2):
				printf("x tiene el valor de 2");
				break;
			default:
				printf("x tiene otro valor");
				break;
		}
	}

¡ACLARACION IMPORTANTE!
Lo que va dentro de os parentesis de caso(), debe ser obligatoriamente una constante.(Por ejemplo no puede ser x+1, o x++, o x<10, etc.)
*/
#define para(x,y,z)	for (x;y;z)
/*Directiva de flujo de programa, es una modificacion avanzada para ciertos tipos de mietras()
Ejemplo:
	{
		para(x=0, x<100, x++) 	//Lo que hace este codigo es inicializar la variable x en 0, y chequea si esta es menor a 100, si es asi la
		{}						//incremente en 1, y vueve a chequear hasta que esta variable sea mayor a 100
	}							//Notese que entre as llaves no puse ningun codigo pero tranquilamente puede haber cualquier tipo de codigo.

*/
#define devover(x)	return (x)

typedef int entero;				//Se refiere a variables de tipo entero, generalmente estas ocupan entre 4 bytes y 8 bytes, y su rango de valores
								//varia entre 0 y 65000 aprox si es nosignado.

typedef char caracter;			//Variable de tipo caracter ocupa un byte, y su rango de valores varia entre 0 y 255 si es nosignado.

typedef void nada;

typedef	long int l_entero;		//Es una variable larga entera, se la utiliza por si el rango de valores de las variables entero no alcanza.

typedef float flotante;
typedef double doblef;
typedef long double l_doblef;
typedef unsigned int entero_no;
typedef unsigned char caracter_no;
typedef short int c_entero;

#endif
