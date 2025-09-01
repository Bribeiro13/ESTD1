#include <stdio.h>
/**********************************/
void imprimeVetor(int *v, int n){
  printf("\nVetor: |");
  for(int i=0; i<n; i++){
    printf(" %d |", v[i]);
  }
}
/**********************************/

void selectionSort(int *v, int n){
    int i, j, menor, aux;
    for(i=0; i<n-1; i++){//percorre o vetor copleto
        menor=i;
        for(j = i+1; j<n; j++){ //buscar o menor valor
            if(v[j]<v[menor]){//se achei um outro menor
                menor = j;
            }
        }
        if(i != menor){
            aux =  v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
        imprimeVetor(v, 5);
    }
}

int main(void) {
  int vet[5] = {23,2,4,17,30};

  printf("\nOriginl");
  imprimeVetor(vet, 5);

  selectionSort(vet, 5);

    


  
  return 0;
}