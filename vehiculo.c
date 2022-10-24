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

    int pasajerosABordo;
    float promedioEdadPasajeros;
};

Vehiculo crearVehiculo(char marca[20], char color[20], int anio, float promedioEdadPasajeros)
{
    Vehiculo vehiculo = malloc(sizeof(struct _Vehiculo));

    strcpy(vehiculo->marca, marca);
    strcpy(vehiculo->color, color);

    vehiculo->anio = anio;

    vehiculo->pasajerosABordo = 0;
    vehiculo->promedioEdadPasajeros = promedioEdadPasajeros;

    for(int i = 0; i < CANTIDAD_PASAJEROS; i++)
    {
        vehiculo->pasajeros[i] = inicializarPasajero();
    }

    return vehiculo;
}


Vehiculo crearVehiculoPorTeclado()
{
    char marca[20];
    char color[20];

    int anio;
    float promedioEdadPasajeros = 0;

    printf("\n\nCreando un vehiculo...");

    printf("\n- Ingrese marca del vehiculo: ");
    fflush(stdin);
    gets(marca);

    printf("\n- Ingrese color del vehiculo: ");
    fflush(stdin);
    gets(color);

    printf("\n- Ingrese anio del vehiculo: ");
    scanf("%d", &anio);


    return crearVehiculo(marca, color, anio, promedioEdadPasajeros);
}


void mostrarVehiculo(Vehiculo vehiculo)
{
    printf("\nMostrando Vehiculo...");
    printf("\n\t- Marca: %s", vehiculo->marca);
    printf("\n\t- Color: %s", vehiculo->color);
    printf("\n\t- Anio: %d", vehiculo->anio);
    printf("\n\t- Promedio edad pasajeros: %.2f", vehiculo->promedioEdadPasajeros / vehiculo->pasajerosABordo);

    int pasajerosEnVehiculo = CANTIDAD_PASAJEROS;

    for(int i = 0; i < CANTIDAD_PASAJEROS; i++)
    {
        mostrarPasajero(vehiculo->pasajeros[i]);
        if(getEdadPasajero(vehiculo->pasajeros[i]) == -1)
        {
            pasajerosEnVehiculo--;
        }
    }
    if(pasajerosEnVehiculo == 0)
    {
        printf("\nNo hay pasajeros en el vehiculo...");
    }
}


void agregarPasajeros(Vehiculo vehiculo, int cantidadPasajeros)
{

    int posicionLibre;

    if(cantidadPasajeros <= CANTIDAD_PASAJEROS)
    {
        for(int i = 0; i < cantidadPasajeros; i++)
        {
            posicionLibre = buscarPosicionLibre(vehiculo);
            if(posicionLibre != -1)
            {
                vehiculo->pasajeros[posicionLibre] = crearPasajeroPorTeclado();
                setPosicionPasajero(vehiculo->pasajeros[posicionLibre], posicionLibre);
                vehiculo->promedioEdadPasajeros += getEdadPasajero(vehiculo->pasajeros[i]);
                vehiculo->pasajerosABordo++;
            }
        }
    }

    if(cantidadPasajeros > CANTIDAD_PASAJEROS)
    {
        printf("\nLa cantidad maxima es de %d pasajeros (ingresado: %d)...", CANTIDAD_PASAJEROS, cantidadPasajeros);
    }

    if(vehiculo->pasajerosABordo == CANTIDAD_PASAJEROS)
    {
        printf("\nNo hay mas espacio en el vehiculo...");
    }
}


int buscarPosicionLibre(Vehiculo vehiculo)
{
    int posicion = -1;

    for(int i = 0; i < CANTIDAD_PASAJEROS; i++)
    {
        if(getEdadPasajero(vehiculo->pasajeros[i]) == -1)
        {
            posicion = i;
            i = CANTIDAD_PASAJEROS;
        }
    }
    return posicion;
}


void ordenarPasajerosPorNombre(Vehiculo vehiculo)
{

    Pasajero pasajeroAuxiliar;

    printf("\nOrdenando pasajeros por nombre...");

    for(int i = 0; i < CANTIDAD_PASAJEROS; i++)
    {
        for(int j = 0; j < CANTIDAD_PASAJEROS - 1; j++)
        {
            if(strcmp(getNombrePasajero(vehiculo->pasajeros[j]), getNombrePasajero(vehiculo->pasajeros[j+1])) > 0)
            {
                pasajeroAuxiliar = vehiculo->pasajeros[j];
                vehiculo->pasajeros[j] = vehiculo->pasajeros[j+1];
                vehiculo->pasajeros[j+1] = pasajeroAuxiliar;
            }
        }
    }
}
