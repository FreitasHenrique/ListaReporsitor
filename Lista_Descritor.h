typedef struct no{
    int info;
    struct no* prox;
}NoLista;

typedef struct descritor{
    NoLista *prim,*ult;
    int n ;
}Descritor;

void criaLista(Descritor *l);

int estaVazia(Descritor *l);

void insereInicio(Descritor *l, int v);

void imprimeLista(Descritor *l);

void insereFim(Descritor *l, int v);
