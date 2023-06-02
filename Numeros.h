//
// Created by Administrador on 2/6/2023.
//
/*14. Crear una lista de números enteros, diseñar las siguientes funciones:
a. Determinar cuál es el máximo elemento y mostrarlo por pantalla.
b. Determinar cuál es el mínimo elemento y mostrarlo por pantalla.
c. Eliminar de la lista el máximo y el mínimo, utilizando las funciones
        desarrolladas en los puntos anteriores.*/

#ifndef GUIA1_EJ14_NUMEROS_H
#define GUIA1_EJ14_NUMEROS_H

typedef struct numero{
    int num;
    struct numero * sig;
}Numero;

typedef struct lista{
    Numero * cabecera;
}Lista;

Numero * newNumero (int num);
Lista * newLista ();

void enlistar(Numero * numAInsertar, Lista * lista);
int max(Lista * lista);
int min(Lista * lista);
void eliminar(Lista * lista, int min, int max);


#endif //GUIA1_EJ14_NUMEROS_H
