#ifndef LISTA_H
#define LISTA_H

struct reg{
  int conteudo;
  struct reg *prox;
};

typedef struct reg* celula;

void insere(celula, int);
celula cria_celula();
celula busca(celula, int);
void removeCel(celula, int);
void removetodos(celula, int);
void imprime(celula);
int vazia(celula);
int contaLista(celula);

#endif
