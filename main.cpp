#include <iostream>
using namespace std;

void imprimirArbol(int filas) {
    int espacios = filas - 1;
    int estrellas = 1;

    // Imprimir la parte superior del árbol
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < espacios; ++j) {
            cout << " ";
        }
        for (int k = 0; k < estrellas; ++k) {
            cout << "*";
        }
        cout << endl;
        espacios--;
        estrellas += 2;
    }
}

int main() {
    int filas;

    cout << "Ingrese el número de filas para el árbol de Navidad: ";
    cin >> filas;

    imprimirArbol(filas);

    return 0;
}
