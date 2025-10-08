#include <stdio.h>
#include <stdlib.h>
typedef struct cel{
    int conteudo;
    struct cel *seg;
}cel;
typedef struct cel* Lista;

Lista* cria_Lista(){
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li!=NULL){
        *li=NULL;
    }
    return li;
}

int insere_lista_fim (Lista* lista, int x){
    if(lista == NULL){ return 0;}
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux == NULL){ return 0;}
    aux->conteudo = x;
    aux->seg = NULL;
    
    if(*lista ==NULL){
        *lista = aux;
    }else{
        cel *temp;
        temp = *lista;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    
    return 1;
}

void imprime_lista(Lista* lista){
    if(lista == NULL){
        printf("Lista invalida.");
    }else{
        printf("Minha Lista:\n");
        cel* aux = *lista;
        while(aux!=NULL){
            printf("\t%d", aux->conteudo);
            aux = aux->seg;
        }
    }
    printf("\n");
}

int busca_lista(Lista* lista, int x){
    if(lista == NULL){
        return 0;
    }else{
        cel* aux = *lista;
        do{
            if(aux->conteudo == x){
                return 1;
            }
            aux = aux->seg;
        }while(aux!=NULL);
        return 0;
    }

}



int main()
{
    Lista *lst;
    lst = cria_Lista();
    
    cel c1, c2, c3;
    c1.conteudo = 1;
    c2.conteudo = 2;
    c3.conteudo = 3;
    c1.seg = &c2;
    c2.seg = &c3;
    c3.seg = NULL;
    
    
    *lst = &c1;
    
    insere_lista_fim(lst, 4);

    
    cel* aux = *lst;
    
    
    imprime_lista(lst);

    printf("\nResultado busca: %d",busca_lista(lst, 4));

    return 0;
}
