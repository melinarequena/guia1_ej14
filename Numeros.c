//
// Created by Administrador on 2/6/2023.
//

#include "Numeros.h"
#include<stdio.h>
#include<malloc.h>

Numero * newNumero(int num){
    Numero * auxNumero = NULL;
    auxNumero = malloc(sizeof(Numero));
    if(auxNumero == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        auxNumero->sig = NULL;
        auxNumero->num = num;

        return auxNumero;
}

Lista * newLista(){
    Lista * auxLista = NULL;
    auxLista = malloc(sizeof(Lista));
    if(auxLista == NULL){
        printf("Error al signar memoria\n");
        exit -1;
    }
    return auxLista;
}

void enlistar(Numero * numAInsertar, Lista * lista){
    if(lista->cabecera == NULL){
        lista->cabecera = numAInsertar;
    }else
        while(lista->cabecera != NULL){
            lista->cabecera = lista->cabecera->sig;
        }
        lista->cabecera = numAInsertar;
}
int max(Lista * lista){
    int numMax = lista->cabecera->num;
    while(lista->cabecera != NULL){
        if(numMax<lista->cabecera->num){
            numMax = lista->cabecera->num;
        }
        lista->cabecera = lista->cabecera->sig;
    }
    return numMax;
}

int min(Lista * lista){
    int numMin = lista->cabecera->num;
    while(lista->cabecera != NULL){
        if(lista->cabecera < numMin){
            numMin = lista->cabecera->num;
        }
        lista->cabecera = lista->cabecera->sig;
    }
    return numMin;
}

void eliminar(Lista * lista, int min, int max){
    while(lista->cabecera != NULL){
        if(lista->cabecera == min){
            if()
        }
    }

}