#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED

struct _Pasajero;

typedef struct _Pasajero * Pasajero;


Pasajero crearPasajero(int posicion, int edad);
Pasajero crearPasajeroPorTeclado();


void destruirPasajero(Pasajero pasajero);
void mostrarPasajero(Pasajero pasajero);


#endif // PASAJERO_H_INCLUDED
