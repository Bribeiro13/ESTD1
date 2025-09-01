#include <stdio.h>
#define n 10
/**********************************/
void imprimeVetor(int *v){
  printf("\n----------Vetor----------\n");
  for(int i=0; i<n; i++){
    printf(" %d |", v[i]);
  }
}
/**********************************/

void insertionSort (int *v){
  int i, j, aux;
  for (i=1;i<n;i++){
    aux = v[i];
    for (j=i;(j>0)&&(aux<v[j-1]);j--){
      v[j] = v[j-1];
    }
    v[j] = aux;
  }
}

int main(void) {
  int vet[10] = {6,75,1,14,24,18,3,7,50,10};

  imprimeVetor(vet);

  insertionSort(vet);

  imprimeVetor(vet);

  
  return 0;
}