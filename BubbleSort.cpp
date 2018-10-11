#include <iostream>
#include <conio.h>
using namespace std;


int main() {
    int x[5], aux;
    //clrscr();

    // Carregando os numeros no vetor
    for(int i=0;i<=4;i++){
        cout << "Digite o" << i+1 << " numero: ";
        cin >> x[i];
    }
    // Ordeando de forma Crescente
    // Laço com a quantidade de elementos do vetor

    for(int n=0;n<=5;n++){
        // Laço que percorre da primeira a penultima posição do vetor
        for(int i=0;i<=3;i++){
            if(x[i] > x[i+1]){
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
            }
        }

    }
    // Mostrando o vetor ordenado
    for(int i=0;i<=4;i++){
        cout << i+1 << " numero: " << x[i] << "\n" ;
    }
    getch();
    return 0;
}