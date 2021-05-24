#include <iostream>

using namespace std;

int x[11];

void heap_fica(int i, int qtd){
  int f_esq, f_dir, maior, aux;

  maior = i;
  if(2*i+1<=qtd){
    // Nó analisado tem filhos  para esquerda e direita
    f_esq = 2*i+1;
    f_dir = 2*i;
    if(x[f_esq]>=x[f_dir] && x[f_esq]>x[i]){
      maior = 2*i+1;
    }
    else if(x[f_dir]>x[f_esq] && x[f_dir]>x[i]){
      maior = 2*i;
    }
  }
  else if(2*i<=qtd){
    // Nó analisado tem filhos apenas para direita
    f_dir = 2*i;
    if(x[f_dir]>x[i]){
      maior = 2*i;
    }
  }
  if(maior != i){
    aux = x[i];
    x[i] = x[maior];
    x[maior] = aux;
    heap_fica(maior, qtd);
  }
}

void transforma_heap(int qtd){
  int pai, aux;

  for(int i=qtd/2;i>=1;i--){
    heap_fica(i,qtd);
  }
}

void ordena(int qtd){
  int aux, ultima_posix;

  for(int i=qtd;i>=2;i--){
    aux = x[1];
    x[1] = x[i];
    x[i] = aux;
    ultima_posix = i-1;
    heap_fica(1,ultima_posix);
  }
}

int main(){
  int qtd;

  // Carregando os numeros no vetor
  for(int i=1;i<=10;i++){
    cout << "Digite o "  << i << "° numero: ";
    cin  >> x[i];
  }

  // Transforma o vetor digitado em uma Heap
  qtd = 10;
  transforma_heap(qtd);

  // Ordenando de forma Crescente
  ordena(qtd);

  // Mostrando o vetor ordenado
  for(int i=1;i<=10;i++){
    cout << i << "° numero: " << x[i] << endl;
  }

  return 0;
  
}
