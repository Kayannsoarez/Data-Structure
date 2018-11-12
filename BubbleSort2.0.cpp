#include <iostream>
#include <conio.h>

using namespace std;


int main() {
    int x[5],j, i, aux;
    //clrscr();

    // Carregando os numeros no vetor
    for (int i = 0; i <= 4; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> x[i];
    }

    // Ordeando de forma Crescente
    // Laço com a quantidade de elementos do vetor - 1
    for (int j = 1; j <= 4; j++) {
        // Laço que percorre da ultima posição a posição j do vetor
        for (int i = 4; i >= j; i--) {
            if (x[i] < x[i - 1]) {
                aux = x[i];
                x[i] = x[i - 1];
                x[i - 1] = aux;
            }
        }

    }
    // Mostrando o vetor ordenado
    for (int i = 0; i <= 4; i++) {
        cout << i + 1 << " numero: " << x[i] << "\n";
    }
    getch();
    return 0;
}
