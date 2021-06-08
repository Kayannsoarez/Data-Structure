#include <iostream>

using namespace std;

int main() {
  int x[10],i, n, achou;

  // Carregando os numeros no vetor (Ordenado)
  for(int i=0;i<=9;i++){
    cout << "Digite o " << i+1 << "° numero: ";
    cin >> x[i];
  }

  // Numero a ser buscado no vetor
  cout << "\nDigite o numero a ser buscado: ";
  cin >> n;

  // Buscando o numero no vetor
  i = 0;
  achou = 0;
  while(i<=9 && achou == 0 && n >= x[i]){
    if(x[i]==n){
      achou = 1;
    }
    else{
      i++;
    }
  }
  
  if(achou == 0){
    cout << "Numero não encontrado";
  }
  else{
    cout << "Numero encontrado na posição " << i+1;
  }
  
  return 0;
}
