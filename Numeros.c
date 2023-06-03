//
// Created by Administrador on 2/6/2023.
//

#include "Numeros.h"
#include<stdio.h>
#include<malloc.h>

Numero * newNumero(int num){
    Numero * auxNumero = malloc(sizeof(Numero));
    if(auxNumero == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        auxNumero->sig = NULL;
        auxNumero->num = num;

        return auxNumero;
}

Lista * newLista(){
    Lista * auxLista = malloc(sizeof(Lista));
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

void eliminarmin(Lista * lista, int min){

    if(lista->cabecera == NULL) {
        printf("Lista vacia\n");
    }
        else{
        Numero * antNum = lista->cabecera;
        Numero * actNum = antNum;
            while (actNum->num != min) {
                antNum = actNum;
                actNum = actNum->sig;
            }
            if(actNum == lista->cabecera){
                lista->cabecera = actNum->sig;
                free(actNum); //Liberamos el actual de la memoria
            }else{
                if(actNum->sig == NULL){ //Final de la lista
                    antNum->sig = NULL;
                    free(actNum);
                }else{
                    antNum->sig = actNum->sig;
                    free(actNum);
                }
            }
        }
    }

void eliminarmax(Lista * lista, int max){
    if(lista->cabecera == NULL){
        printf("La lista esta vacia\n");
    }else{
        Numero * antNum = lista->cabecera;
        Numero * actNum = antNum;
        while(actNum != max){
            antNum = actNum;
            actNum = actNum->sig;
        }
        if(lista->cabecera == actNum){// primero de la lista
            lista->cabecera = actNum->sig;
            free(actNum);
        }else{
            if(actNum->sig == NULL){//final de la lissta
                antNum->sig = NULL;
                free(actNum);
            }else{
                antNum->sig = actNum->sig;
                free(actNum);
            }
        }
    }
}

