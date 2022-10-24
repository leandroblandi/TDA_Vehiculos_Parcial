/*-----------------------
 | main.c
 | Author: Leandro Blandi
 ------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "vehiculo.h"
#include "pasajero.h"


int main()
{
    printf("\n--- Segundo parcial ---");

    Vehiculo vehiculo = crearVehiculoPorTeclado();
    mostrarVehiculo(vehiculo);

    agregarPasajeros(vehiculo, 2);
    mostrarVehiculo(vehiculo);

    ordenarPasajerosPorNombre(vehiculo);
    mostrarVehiculo(vehiculo);

    agregarPasajeros(vehiculo, 4);
    mostrarVehiculo(vehiculo);

    destruirVehiculo(vehiculo);

    return 0;
}
