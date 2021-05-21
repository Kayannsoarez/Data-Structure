#include <iostream>

using namespace std;

int main() {
  int x[5], n, aux, troca;

  // Carregando os numeros no vetor
  for(int i=0;i<=4;i++){
    cout << "Digite o " << i+1 <<"° numero: ";
    cin >> x[i];
  }

  n = 1;
  troca = 1;

  /* Ordenando de forma decrescente
     Laço com quantidade de elementos do vetor e enquanto houver troca
  */
  while(n<=5 && troca==1){
    troca = 0;

    for(int i=0;i<=3;i++){
      if(x[i]<x[i+1]){
        troca = 1;
        aux = x[i];
        x[i] = x[i+1];
        x[i+1] = aux;
      }
    }
    n = n+1;

  }

  // Mostrando o vetor ordenado
  for(int i=0;i<=4;i++){
    cout << i+1 << "° numero: " << x[i] << endl;
  }
  
  return 0;

}
