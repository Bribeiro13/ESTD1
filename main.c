#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
    int conteudo;
    struct elemento *prox;
}Elem;

typedef struct elemento* Pilha;

Pilha* cria_pilha(){
    Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi!=NULL){
        *pi = NULL;
    }
    return pi;
}

int push(Pilha *pi, int x){
    if(pi == NULL){
        return 0;
    }
    Elem *no;
    no = (Elem*) malloc (sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no -> conteudo = x;
    no -> prox = (*pi);
    *pi = no;
    return 1;
}

int consulta_topo(Pilha *pi){
    if(pi == NULL || (*pi) == NULL){
        return 0;
    }
    return (*pi) -> conteudo;
}

void libera_pilha(Pilha *pi){
    if(pi!= NULL){
        Elem *no;
        while((*pi)!= NULL){
            no = *pi;
            *pi = (*pi) -> prox;
            free(no);
        }
        free(pi);
    }
}

void imprimir_pilha(Pilha *pi){
    if(pi == NULL){
        return;
    }
    Elem *no = *pi;
    printf("\n-----------TOPO");
    while(no!= NULL){
        printf("\nConteudo: %d", no -> conteudo);
        no = no -> prox;
    }
    printf("\n-----------TOPO");
}

int pop(Pilha *pi){
    if(pi == NULL || (*pi) == NULL){
        return 0;
    }
    Elem *no = *pi;
    *pi = no -> prox;
    
    int aux = no -> conteudo
    free(no);
    return aux;
    
}

int main()
{
    printf("Inicio");
    Pilha *pi = cria_pilha();
    push(pi,0);
    push(pi,1);
    push(pi,2);
    push(pi,3);

    return 0;
}
