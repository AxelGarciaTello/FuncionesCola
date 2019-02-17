#include <stdio.h>
#include <stdlib.h>
#define TAMC 100

//Definimos el tipo de dato a usar en la pila
typedef int TipoDatoC;

//Creamos la estructura COLA
typedef struct cola{
	int frente, final;
	TipoDatoC listaCola[TAMC];
} COLA;

//Funciones principales para la utilización de una cola
void crearCola(COLA *);
void insertarCola(COLA *, TipoDatoC);
TipoDatoC quitarCola (COLA *);
void eliminarCola(COLA *);
int colaVacia(COLA);
int colaLlena(COLA);
TipoDatoC frenteCola(COLA);
