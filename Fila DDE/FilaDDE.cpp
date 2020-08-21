#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "TADFilaDDE.h"

int main(){
    TpDescritor descritor;

    inicializar(descritor);

    inserir(descritor, 'A');
    inserir(descritor, 'B');
    inserir(descritor, 'C');

    retirar(descritor);

    exibir(descritor);
}
