#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

// aloca uma fila na memória
fila cria_fila()
{
  fila f = (fila) malloc(sizeof(struct struct_fila));
  f->l = cria_celula();
  f->l->prox = NULL;
  return f;
}

// Adiciona um inteiro x no fim de uma fila
void push(fila f, int x)
{
  celula* aux = &(f->l);
  while((*aux)->prox != NULL)
  {
    aux = &((*aux)->prox);
  }
  insere((*aux), x);
}

// Remove o primeiro elemento da fila e retorna seu valor
int pop(fila f)
{
  if(vazia(f->l))
    exit(9);
  int aux = f->l->conteudo;
  f->l = f->l->prox;
  return aux;
}