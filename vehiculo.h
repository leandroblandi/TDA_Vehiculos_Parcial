#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

struct _Vehiculo;

typedef struct _Vehiculo * Vehiculo;

Vehiculo crearVehiculo(char marca[20], char color[20], int anio, float promedioEdadPasajeros);





#endif // VEHICULO_H_INCLUDED
