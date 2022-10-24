/*-----------------------
 | vehiculo.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

struct _Vehiculo;

typedef struct _Vehiculo * Vehiculo;


/*---------------
 | Constructores
 ----------------*/

Vehiculo crearVehiculo(char marca[20], char color[20], int anio, float promedioEdadPasajeros);
Vehiculo crearVehiculoPorTeclado();


/*-----------
 | Destructor
 ------------*/

void destruirVehiculo(Vehiculo vehiculo);


/*---------------------------------
 | Funciones individuales: Vehiculo
 ---------------------------------*/

void mostrarVehiculo(Vehiculo vehiculo);


/*---------------------------------------------
 | Funciones de arreglo: Pasajeros en Vehiculo
 ---------------------------------------------*/

void agregarPasajeros(Vehiculo vehiculo, int cantidadPasajeros);
void ordenarPasajerosPorNombre(Vehiculo vehiculo);


/*---------------------
 | Funciones especiales
 ----------------------*/

int buscarPosicionLibre(Vehiculo vehiculo);

#endif // VEHICULO_H_INCLUDED
