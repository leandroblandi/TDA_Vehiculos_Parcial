#include <stdio.h>
#include <stdlib.h>
#include "vehiculo.h"
#include "pasajero.h"


int main()
{
    Vehiculo vehiculo = crearVehiculoPorTeclado();
    mostrarVehiculo(vehiculo);
    agregarPasajeros(vehiculo, 2);
    ordenarPasajerosPorNombre(vehiculo);
    mostrarVehiculo(vehiculo);
    agregarPasajeros(vehiculo, 4);
    mostrarVehiculo(vehiculo);
    return 0;
}
