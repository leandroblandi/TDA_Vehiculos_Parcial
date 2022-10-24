#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pasajero.h"

struct _Pasajero
{
    int posicion;
    int edad;
};


Pasajero crearPasajero(int posicion, int edad)
{
    Pasajero pasajero = malloc(sizeof(struct _Pasajero));

    pasajero->posicion = posicion;

    pasajero->edad = edad;

    return pasajero;

}


Pasajero crearPasajeroPorTeclado()
{
    int posicion;
    int edad;

    printf("\nIngrese posicion de pasajero: ");
    scanf("%d", &posicion);

    printf("\nIngrese edad del pasajero: ");
    scanf("%d", &edad);

    return crearPasajero(posicion, edad);
}


void destruirPasajero(Pasajero pasajero)
{
    free(pasajero);
}


void mostrarPasajero(Pasajero pasajero)
{
    printf("\nPasajero:");
    printf("\n\tPosicion: %d", pasajero->posicion);
    printf("\n\tEdad: %d", pasajero->edad);
}
