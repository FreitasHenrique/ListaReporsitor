#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int info;
    struct no* prox;
}NoLista;

typedef struct descritor{
    NoLista *prim,*ult;
    int n ;
}Descritor;

void criaLista(Descritor *l){
    l->prim = NULL;
    l->ult = NULL;
    l->n = 0;
    
}

int estaVazia(Descritor *l){
    if(l->n == 0){
        return(1);
    }else{
        return(0);
    }
    
}

void insereInicio(Descritor *l, int v){
    NoLista *n =(NoLista*) malloc(sizeof(NoLista));
    if(n != NULL){
        n->info = v;
        n->prox = l->prim;
        l->prim = n;
        if(estaVazia(l))
           l->ult = n;
        l->n++;
    }else{
        printf("NÃO FOI POSSÍVEL ALOCAR ESPAÇO");
    }
}

void imprimeLista(Descritor *l){
    if(!estaVazia(l)){
        NoLista *n = l->prim;
        int i = 0;
        while(n != NULL){
            printf("POSIÇÃO |%d|-- VALOR|%d| \n",i,n->info);   
            n = n->prox;
        }
    }
}

void insereFim(Descritor *l, int v){
    NoLista* n =(NoLista*) malloc(sizeof(NoLista));
    if(n != NULL){
        n->info = v;
        n->prox = NULL;
        l->ult->prox = n;
        l->ult = n ;
        if(estaVazia(l)){
           l->prim = n; 
        }   
        l->n++;
    }else{
        printf("NÃO FOI POSSÍVEL ALOCAR ESPAÇO");
    }
}
