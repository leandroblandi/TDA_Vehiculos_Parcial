/*-----------------------
 | pasajero.c
 | Author: Leandro Blandi
 ------------------------*/

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


/*---------------
 | Constructores
 ----------------*/

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
    // Pasajero filtrable
    return crearPasajero("", -1, -1);
}


 /*--------
 | Getters
 ---------*/

char * getNombrePasajero(Pasajero pasajero)
{
    return pasajero->nombre;
}


int getEdadPasajero(Pasajero pasajero)
{
    return pasajero->edad;
}


 /*--------
 | Setter
 ---------*/

void setPosicionPasajero(Pasajero pasajero, int nuevaPosicion)
{
    pasajero->posicion = nuevaPosicion;
}


/*---------------
 | Destructor
 ----------------*/

void destruirPasajero(Pasajero pasajero)
{
    free(pasajero);
}


/*---------------------------------
 | Funciones individuales: Pasajero
 ---------------------------------*/

void mostrarPasajero(Pasajero pasajero)
{
    // Si el pasajero no esta vacio
    if(pasajero->edad != -1)
    {
        printf("\nPasajero:");
        printf("\n\t- Nombre: %s", pasajero->nombre);
        printf("\n\t- Posicion: %d", pasajero->posicion + 1);
        printf("\n\t- Edad: %d", pasajero->edad);
    }
}
