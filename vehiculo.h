#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

struct _Vehiculo;

typedef struct _Vehiculo * Vehiculo;

Vehiculo crearVehiculo(char marca[20], char color[20], int anio, float promedioEdadPasajeros);
Vehiculo crearVehiculoPorTeclado();

void mostrarVehiculo(Vehiculo vehiculo);

void agregarPasajeros(Vehiculo vehiculo, int cantidadPasajeros);
void ordenarPasajerosPorNombre(Vehiculo vehiculo);

int buscarPosicionLibre(Vehiculo vehiculo);

#endif // VEHICULO_H_INCLUDED
