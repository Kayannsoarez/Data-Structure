#include <iostream>

using namespace std;

int main() {
  int x[5], j, eleito;

  // Carregando os numeros no vetor
  for(int i=0;i<=4;i++){
    cout << "Digite o " << i+1 << "° numero: ";
    cin >> x[i];
  }

  /* Ordenando de forma crescente
     Laço com a quantidade de elementos do vetor -1
     Laço pecorre os elementos a esquerda do numero eleito
     até encontrar a posição para recolocação do numero eleito
  */
  for(int i=0;i<=4;i++){
    eleito = x[i];
    j = i-1;

    while(j>=0 && x[j]>eleito){
      x[j+1] = x[j];
      j = j-1;
    }
  x[j+1] = eleito;

  }

  // Mostrando o vetor ordenado
  for(int i=0;i<=4;i++){
    cout << i+1 << "° numero: " << x[i] << endl;
  }

  return 0;

}
