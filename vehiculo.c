#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vehiculo.h"
#include "pasajero.h"

#define CANTIDAD_PASAJEROS 5

struct _Vehiculo
{
    char marca[20];
    char color[20];
    int anio;

    Pasajero pasajeros[CANTIDAD_PASAJEROS];

    float promedioEdadPasajeros;
};

Vehiculo crearVehiculo(char marca[20], char color[20], int anio, float promedioEdadPasajeros)
{
    Vehiculo vehiculo = malloc(sizeof(struct _Vehiculo));

    strcpy(vehiculo->marca, marca);
    strcpy(vehiculo->color, color);

    vehiculo->anio = anio;
    vehiculo->promedioEdadPasajeros = promedioEdadPasajeros;

    return vehiculo;
}
