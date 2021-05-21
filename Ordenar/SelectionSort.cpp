#include <iostream>

using  namespace std;

int main() {
  int x[5], j, eleito, menor, pos;

  // Carregando os numeros no vetor
  for(int i=0;i<=4;i++){
    cout << "Digite o " << i+1 << "° numero: ";
    cin >> x[i];
  }

  /* Ordenano de forma crescente
     Laço que pecorre da 1° posição a penultima posição do vetor
     elegendo um numero para ser comparado
  */
  for(int i=0;i<=3;i++){
    eleito = x[i];
    menor = x[i+1];
    pos = i+1;

    /* Laço que percorre os elementos que estão a direita do eleito
       retornando o menor numero a direita e sua posição
    */
    for(j=i+1;j<=4;j++){
      if(x[j]<menor){
        menor = x[j];
        pos = j;
      }
    }

    /* Troca do numero eleito com o numero da posição posição
       o numero da posição pos é o menor numero a direita do eleito
    */
    if(menor < eleito){
      x[i] = x[pos];
      x[pos] = eleito;
    }
  }

  // Mostrando o vetor ordenado
  for(int i=0;i<=4;i++){
    cout << i+1 << "° numero: " << x[i] << endl;
  }

  return 0;
}
