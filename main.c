/*14. Crear una lista de números enteros, diseñar las siguientes funciones:
a. Determinar cuál es el máximo elemento y mostrarlo por pantalla.
b. Determinar cuál es el mínimo elemento y mostrarlo por pantalla.
c. Eliminar de la lista el máximo y el mínimo, utilizando las funciones
desarrolladas en los puntos anteriores.
 */
#include "Numeros.h"

int main(){
    int numMax, numMin;
    Lista * lista = newLista();
    enlistar(newNumero(2), lista);
    enlistar(newNumero(20), lista);
    enlistar(newNumero(5), lista);
    enlistar(newNumero(1), lista);
    enlistar(newNumero(16), lista);
    enlistar(newNumero(8), lista);

    eliminarmax(lista, numMax=max(lista));
    eliminarmin(lista, numMin=min(lista));


}