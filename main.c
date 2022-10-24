#include <stdio.h>
#include <stdlib.h>
#include "pasajero.h"


int main()
{
    Pasajero pasajero = crearPasajeroPorTeclado();
    mostrarPasajero(pasajero);
    return 0;
}
