#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimeVetor(int *v, int n){
  printf("\nVetor: |");
  for(int i=0; i<n; i++){
    printf(" %d |", v[i]);
  }
}

int particiona(int *v, int inicio int final){
    int esq, dir, piv, aux;
    esq = inicio;
    dir = final;
    pivo = v[inicio];
    while(esq<dir){
        while(esq<=final && v[esq]<=pivo){
            esq++;
        }
        while(dir>=0 && v[dir]> pivo){
            dir--;
        }
        if(esq<dir){
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;
}

void quickSort(int *v, int inicio, int fim){
    int pivo;
    if(fim>inicio){
        pivo = particiona(v, inicio, fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v, pivo+1, fim);
    }
}


int main()
{
    int vet[10] = {23,4,67,-8,90,54,21,2,34,7};
    printf("\nOriginal");
    imprimeVetor(vet, 10);
    mergeSort(vet,0,9);
    imprimeVetor(vet, 10);

    return 0;
}
