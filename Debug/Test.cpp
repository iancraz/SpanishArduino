#include "Arduino.h"
#include "arduino_es.h"
#include "es.h"
#include "lib.h"

void setup()
{
	inicializarPin(3, salida);
	inicializarPin(5, entrada);
}

void loop()
{
	mientras(leerDigital(5) distinto encendido)
	{
		escribirPinDigital(3, apagar);
		temporizador(1000);
		escribirPinDigital(3, encender);
		temporizador(1000);
	}
}


//TODO ESTO ES UNA SIMULACION DE ARDUINO, NO ES NECESARIO LEER LO DE ABAJO.




int main(void)
{
	setup();
	mientras(verdadero)
	{
		loop();
	}
	return 0;
}
