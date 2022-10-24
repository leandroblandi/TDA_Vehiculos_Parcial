#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pasajero.h"

struct _Pasajero
{
    char nombre[30];
    int posicion;
    int edad;
};


Pasajero crearPasajero(char nombre[30], int posicion, int edad)
{
    Pasajero pasajero = malloc(sizeof(struct _Pasajero));

    strcpy(pasajero->nombre, nombre);

    pasajero->posicion = posicion;

    pasajero->edad = edad;

    return pasajero;

}


Pasajero crearPasajeroPorTeclado()
{
    char nombre[30];
    int posicion = -1;
    int edad;

    printf("\n\nCreando un pasajero...");

    printf("\n- Ingrese nombre del pasajero: ");
    fflush(stdin);
    gets(nombre);

    printf("\n- Ingrese edad del pasajero: ");
    scanf("%d", &edad);

    // La posicion sera seteada por agregarPasajero()
    return crearPasajero(nombre, posicion, edad);
}


Pasajero inicializarPasajero()
{
    return crearPasajero("", -1, -1);
}


char * getNombrePasajero(Pasajero pasajero)
{
    return pasajero->nombre;
}


int getEdadPasajero(Pasajero pasajero)
{
    return pasajero->edad;
}


void setPosicionPasajero(Pasajero pasajero, int nuevaPosicion)
{
    pasajero->posicion = nuevaPosicion;
}


void destruirPasajero(Pasajero pasajero)
{
    free(pasajero);
}


void mostrarPasajero(Pasajero pasajero)
{
    if(pasajero->edad != -1)
    {
        printf("\nPasajero:");
        printf("\n\t- Nombre: %s", pasajero->nombre);
        printf("\n\t- Posicion: %d", pasajero->posicion + 1);
        printf("\n\t- Edad: %d", pasajero->edad);
    }
}
