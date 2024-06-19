#include <stdio.h>
#include <iostream>

using namespace std;

int busqueda(int lista[], int elemento, int cotaSup, int cotaInf, int med) {

    if (cotaInf <= cotaSup) {

        if (lista[med] == elemento) return med;

        else if (lista[med] > elemento) {

            cotaSup = med-1;
            med = (cotaInf + cotaSup) / 2;
            return (lista, elemento, cotaSup, cotaInf, med);

        }

        else {

            cotaInf = med+1;
            med = (cotaInf + cotaSup) / 2;
            return (lista, elemento, cotaSup, cotaInf, med);

        }

    }

    else return -1;

}

int main() {

    int arrai[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int largo = sizeof(arrai)/sizeof(*arrai);
    int medio = largo/2;
    int inicio = 0;
    int elem;

    cout << "Ingrese el elemento a buscar: ";
    cin >> elem;

    int resultado = busqueda(arrai, elem, largo, inicio, medio);

    cout << "El elemento buscado " << elem << " se encuentra en el indice " << resultado;


    return 0;
}
