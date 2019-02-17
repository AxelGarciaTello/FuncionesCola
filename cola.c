#include "cola.h"

//Definimos el tipo de dato de la cola
typedef int TipoDatoC;

//Función para inicializar la cola
void crearCola(COLA *c){
	c->frente=c->final=0;
}

//Función para verificar si la cola esta vacia
int  colaVacia(COLA c){
	return (c.frente==c.final?1:0);
}

//Función para verificar si la cola esta llena
int colaLlena(COLA c){
	return (c.frente==(c.final+1)%TAMC?1:0);
}

//Función para ingresar un dato a la cola
void insertarCola(COLA *c, TipoDatoC x){
	if(colaLlena(*c)){
		printf("Error. Cola llena.\n");
		exit(-1);
	}
	c->final=(c->final+1)%TAMC;
	c->listaCola[c->final]=x;
}

//Función para quitar un dato de la cola
TipoDatoC quitarCola (COLA *c){
	if(colaVacia(*c)){
		printf("Error. Cola vacia.\n");
		exit(-1);
	}
	c->frente=(c->frente+1)%TAMC;
	return c->listaCola[c->frente];
}

//Función para mostrar el primer dato introducido en la cola
TipoDatoC frenteCola(COLA c){
	if(colaVacia(c)){
		printf("Error. Cola vacia.\n");
		exit(-1);
	}
	return c.listaCola[(c.frente+1)%TAMC];
}

//Función para eliminar la cola
void eliminarCola(COLA *c){
	c->frente=c->final=0;
}
