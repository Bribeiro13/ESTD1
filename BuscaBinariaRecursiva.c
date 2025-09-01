#include <stdio.h>

int buscaBinariaRecursiva(int v[], int esq, int dir, int x){
    if(dir>=esq){
        int meio  = (esq+dir)/2;
        if(v[meio]==x){
            return meio;
        }
        if(v[meio]>x){
            return buscaBinariaRecursiva(v, esq, meio-1, x);
        }
        return buscaBinariaRecursiva(v, meio+1, dir, x);
    }
    return -1;
} 

int main()
{
    int vetor[10] = {-8,-5,1,4,14,21,23,54,67,90};
    printf("Inicio \n");
    
    int tamanho = 10;
    int x = 20;
    
    printf("RESULTADO: %d \n", buscaBinariaRecursiva(vetor, 0, tamanho-1, x));
    
    
    
    return 0;
}