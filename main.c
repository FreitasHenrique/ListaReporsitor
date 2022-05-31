
#include <stdio.h>
#include <stdlib.h>
#include "Lista_Descritor.h"


int main(int argc, char** argv) {
    Descritor lista;
    
    criaLista(&lista);
    insereInicio(&lista,1);
    insereInicio(&lista,9);
    insereInicio(&lista,12);
    insereFim(&lista,6);
    
    imprimeLista(&lista);
    return (0);
}

