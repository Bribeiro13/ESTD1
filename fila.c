#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
    int conteudo;
    struct elemento *prox;
}Elem;

typedef struct fila{
    struct elemento *inicio;
    struct elemento *fim;
    int quantidade;
}Fila;

Fila* cria_fila(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));
    if(fi!=NULL){
        fi->inicio = NULL;
        fi->fim = NULL;
        fi->quantidade = 0;
    }
    return fi;
}


int enqueue(Fila *fi, int x){
    if(fi==NULL){
        return 0;
    }
    Elem *no;
    no = (Elem*) malloc (sizeof(Elem));
    if(no == NULL){
        return 0;
    }
    no->conteudo = x;
    no->prox = NULL;
    
    if(fi->inicio == NULL){
        fi->inicio = no;
    }
    fi->fim->prox = no;
    
    fi->fim = no;
    fi->quantidade++;
    retun 1;
}

int main()
{
    printf("Hello World");

    return 0;
}