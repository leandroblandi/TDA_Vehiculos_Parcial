#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED

struct _Pasajero;

typedef struct _Pasajero * Pasajero;


Pasajero crearPasajero(char nombre[30], int posicion, int edad);
Pasajero crearPasajeroPorTeclado();
Pasajero inicializarPasajero();


char * getNombrePasajero(Pasajero pasajero);
int getEdadPasajero(Pasajero pasajero);

void setPosicionPasajero(Pasajero pasajero, int nuevaPosicion);

void destruirPasajero(Pasajero pasajero);
void mostrarPasajero(Pasajero pasajero);


#endif // PASAJERO_H_INCLUDED
