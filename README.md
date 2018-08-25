# SpanishArduino
Library to start writing code in Spanish.

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
# Libreria para empezar a escribir codigo en castellano para arduino

Este repositorio sirve como guía para empezar a escribir codigo en arduino sin la necesidad de
saber el idioma inglés.
El repositorio todavía está en desarrollo!

## Como utilizarlo

Escencialmente es un solo archivo el que hay que incluir al proyecto que se desea crear, aquí se describirá paso a
paso que se debe hacer para poder escribir un codigo en español y poder correrlo en un arduino.

### 1: Inclusión de archivos

Antes que nada, se necesita descargar este repositorio, y poner la carpeta SpanishArduino, dentro de la carpeta del
proyecto de arduino. Para poder incluir los archivos necesarios para comenzar, solo se necesita escribir al comienzo
del proyecto:
```
#include "./SpanishArduino/SpanishArduino.h"
```
Una vez hecho esto, ya se esta listo para empezar a programar en español.

### 2: Conceptos Básicos de programación en castellano

Para poder programar en castellano, es necesario explicar como se desarrolla el código.

#### 2.1: Directiva "mientras()"

Es una directiva de flujo de programa, mientras suceda cierta condicion se va a ejecutar cierto codigo
Ejemplo:

```
mientras(condición)
{
    instrucción;
}
```
En el ejemplo anterior, mientras que en el programa se cumpla la "condición", se va a ejecutar la instrucción.

#### 2.2: Directiva "si()"

Es una directiva de flujo de programa, si sucede cierta condicion se va a ejecutar cierto codigo(La diferencia con mientras es que el chequeo de la condicion solo lo va a hacer una vez)

Ejemplo:

```
si(condición)
{
    instrucción;
}
```

En este ejemplo, el programa va a verificar si se cumple la "condición", y en caso de que se cumpla, ejecuta la instrucción, caso
contrario, no la ejecuta. Cabe aclarar, que si se cumple la condición, la intrucción se ejecutará solo 1 vez, diferente al bloque "mientras()" que ejecuta la instrucción hasta que la condición no se cumpla.

#### 2.3: Directiva "o_si()"

Sirve para concatenar cadenas de "si()"

Ejemplo:

```
si(condición1)
{
    instrucción1;
}
o_si(condición2)
{
    instrucción2;
}
```
En este ejemplo, si la condicion1 se cumple, se ejecutara la intruccion1. Si la condicion1 no se cumple, pero la condicion2
si se cumple, se ejecutara la instruccion2. Si ninguna de las 2 instrucciones se cumplen, no se ejecutara ninguna instruccion.

#### 2.4: Directiva "otro"

Se comporta como un "o_si()" pero sin condicion, es decir si no se cumplen los "si" puestos anteriormente, se va a
ejecutar este codigo.

Ejemplo:

```
si(condición1)
{
    instrucción1;
}
otro
{
    instrucción2;
}
```

En este ejemplo, si la condicion1 se cumple, se ejecutara la intruccion1. Si la condicion1 no se cumple,  se ejecutara la instruccion2.

#### 2.5: Directiva "Chequeo()/Caso()"

Se utiliza para verificar valores de variables.

Ejemplo:

```
chequeo(x)
{
    caso(1):
        Instruccion1;
        volver;
    caso(2):
        Instruccion2;
        volver;
    default:
        Instruccion3;
        volver;
}
```
Lo que hace este codigo es chequear el valor de x, y si x es 1, ejecuta la instruccion1, si x es 2 ejecuta la intrucion2 y si no es ninguno de esos 2 valores, ejecuta la intruccion3.

#### 2.6: Directiva "para()"

Es una modificacion avanzada para ciertos tipos de mientras()
Ejemplo:

```
para(x=0, x<100, x++)
{
    Instruccion;
}		
```

Hacer ese código, es equivalente a hacer

```
x=0;
mientras(x<100)
{
    instruccion;
    x++;
}
```

### 3: Programación en Arduino

 Durante esta sección se intentará explicar como programar funciones basicas de arduino en castellano.

#### 3.1: Inicialización de pines

Esta funcion se ingresa en el void setup, sirve para inicializar los pines como "entrada" o "salida". Devuelve
una variable bool por si se desea chequear que el pasaje de parametros fue correcto.
Se utiliza de la siguiente manera:

```
{
    ...
    inicializarPin(5, salida);		 // Inicializo el pin 5 digital como una salida
    inicializarPin(5, entrada);		 // Inicializo el pin 6 digital como una entrada
    ...
}
```

#### 3.2: Escritura de pines digitales

Esta funcion se la utiliza en el loop para encender o apagar pines digitales. Devuelve un bool por si se desea
chequear que el pasaje de parametros haya sido correcto.
Se la utiliza de la siguiente manera:

```
{
    ...
    escribirDigital(5, encender);		   //Enciendo el pin 5
    escribirDigital(5, apagar);		       //Apago el pin 5
    ...
}
```

#### 3.3: Lectura de pines digitales

Esta funcion sirve para leer el estado de pines digitales definidos como entrada anteriormente con la funcion inicializarPin. devuelve un bool (true si esta encendido, false si esta apagado).
Se la utiliza de la siguiente manera:

```
{
    ...
    x = leerDigital(6);		//Asigno a la variable "x" el valor 1 o 0 dependiendo del estado del pin.(1 es encendido, 0 es apagado)
    ...
}
```

#### 3.4: Temporizador

Esta funcion sirve para detener el flujo del programa durante ciertos milisegundos, se la utiliza como timer o temporizador.
Se la utiliza de la siguiente manera:

```
{
    ...
    tempo(1000);		//Detengo el programa por 1000 milisegundos
    ...
}
```

SEGUIR...
