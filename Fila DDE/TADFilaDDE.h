struct TpFilaDDE{
    char elemento;
    TpFilaDDE *ant, *prox;
};
struct TpDescritor{
    TpFilaDDE *inicio, *fim;
};

void inicializar(TpDescritor &desc){
    desc.inicio = desc.fim = NULL;
}

TpFilaDDE *novaCaixa(char elemento){
    TpFilaDDE *caixa = new TpFilaDDE;

    caixa->elemento = elemento;
    caixa->prox = NULL;
    caixa->ant = NULL;
    return caixa;
}
void inserir(TpDescritor &desc, char elemento){
    TpFilaDDE *nc;

    nc = novaCaixa(elemento);

    if(desc.inicio == NULL)
        desc.inicio = desc.fim = nc;
    else{//insere no fim
        nc->ant = desc.fim;
        desc.fim->prox = nc;
        desc.fim = nc;
    }
}

void retirar(TpDescritor &desc){
    TpFilaDDE *aux;

    if(desc.inicio != NULL){
        aux = desc.inicio;
        desc.inicio = desc.inicio->prox;
        delete(aux);
    }
}

void exibir(TpDescritor &desc){
    TpFilaDDE *aux;

    aux = desc.inicio;
    while(aux != NULL){
        printf("\t %c", aux->elemento);
        aux = aux->prox;
    }
}










