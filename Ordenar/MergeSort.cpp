#include <iostream>

using namespace std;

void intercala(int x[], int inicio, int fim, int  meio){
  int poslivre, inicio_vetorI, inicio_vetorII, aux[10];

  inicio_vetorI = inicio;
  inicio_vetorII  = meio + 1;
  poslivre = inicio;

  while(inicio_vetorI <= meio &&  inicio_vetorII <= fim){
    if(x[inicio_vetorI]<=x[inicio_vetorII]){
      aux[poslivre] = x[inicio_vetorI];
      inicio_vetorI = inicio_vetorI + 1;
    }
    else{
      aux[poslivre]  = x[inicio_vetorII];
      inicio_vetorII = inicio_vetorII + 1;
    }
  poslivre = poslivre+1;
  }

  // Se existir numeros no primeiro vetor que não foram intercalados
  for(int i=inicio_vetorI;i<=meio;i++){
    aux[poslivre] = x[i];
    poslivre = poslivre + 1;
  }

  // Se existir numeros no segundo vetor que não foram intercalados
  for(int i=inicio_vetorII;i<=fim;i++){
    aux[poslivre] = x[i];
    poslivre = poslivre + 1;
  }

  // Retorna os valore  do vetor aux para o vetor x
  for(int i=inicio;i<=fim;i++){
    x[i] = aux[i];
  }
}

void merge(int x[], int inicio, int fim){
  int meio;

  if(inicio<fim){
    meio = (inicio+fim)/2;
    merge(x,inicio,meio);
    merge(x,meio+1,fim);
    intercala(x,inicio,fim,meio);
  }
}

int main(){
  int x[10];

  // Carregando os numeros no vetor
  for(int i=0;i<=9;i++){
    cout << "Digite o "  << i+1 << "° numero: ";
    cin  >> x[i];
  }

  // Ordenando  de forma crescennte
  merge(x,0,9);

  // Mostrando o vetor Ordenando
  for(int i=0;i<=9;i++){
    cout << i+1 << "° numero: " << x[i] << endl;

  }

  return 0;

}
