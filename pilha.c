#include "pilha.h"
#include <stdlib.h>

pilha cria_pilha() {
  pilha p = (pilha) malloc(sizeof(struct struct_pilha));
  p->l = cria_celula();
  p->l->prox = NULL;
  return p;
}

void empilha(pilha p, int x) {
  insere(p->l, x);
}

int desempilha(pilha p) {
  if(vazia(p->l))
    exit(1);

  celula c = p->l->prox;
  int x = c->conteudo;
  p->l->prox = c->prox;
  free(c);
  return x;
}
