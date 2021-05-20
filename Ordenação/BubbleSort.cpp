#include <iostream>

using namespace std;

int main() {
  int x[5], aux;
  
  // Carregando os numeros no vetor
  for(int i=0;i<=4;i++){
    cout << "Digite o " << i+1 << "° numero: ";
    cin >> x[i];
  }

  /* Ordenando de forma crescente
     Laço com a quantidade de elementos do vetor.
     Laço que percorre da primeira á penultima posiçao do vetor.
  */
  for(int n=1;n<=5;n++){
    for(int i=0;i<=3;i++){
      if(x[i]>x[i+1]){
        aux = x[i];
        x[i] = x[i+1];
        x[i+1] = aux;
      }
    }
  }

  // Mostrando o vetor ordenador
  for(int i=0;i<=4;i++){
    cout << i+1 << "° Numero: " << x[i] << "\n";
  }

  return 0;

}