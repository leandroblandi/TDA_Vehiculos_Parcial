
/*-----------------------
 | pasajero.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED

struct _Pasajero;

typedef struct _Pasajero * Pasajero;


/*---------------
 | Constructores
 ----------------*/

Pasajero crearPasajero(char nombre[30], int posicion, int edad);
Pasajero crearPasajeroPorTeclado();
Pasajero inicializarPasajero();


 /*--------
 | Getters
 ---------*/

char * getNombrePasajero(Pasajero pasajero);
int getEdadPasajero(Pasajero pasajero);


 /*--------
 | Setter
 ---------*/

void setPosicionPasajero(Pasajero pasajero, int nuevaPosicion);


/*-----------
 | Destructor
 ------------*/

void destruirPasajero(Pasajero pasajero);

/*---------------------------------
 | Funciones individuales: Pasajero
 ---------------------------------*/

void mostrarPasajero(Pasajero pasajero);

#endif // PASAJERO_H_INCLUDED
