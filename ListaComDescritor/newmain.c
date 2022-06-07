#include <stdio.h>
#include <stdlib.h>
#include "ListaDescritor.h"


int main(int argc, char** argv) {
    Descritor lista;
    
    criaLista(&lista);
    insereInicio(&lista,1);
    insereInicio(&lista,9);
    insereInicio(&lista,12);
    insereFim(&lista,6);
    
    liberaFim(&lista);
    /*liberaLista(&lista);*/
    
    imprimeLista(&lista);
    return (0);
}
