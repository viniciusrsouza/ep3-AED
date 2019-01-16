#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"
#include "lista.h"
#include "arvore.h"
#include "hash.h"

void readFile(fila, arvore, tabela, pilha);
// 1 5
int main(void)
{
  fila carreira = cria_fila();
  arvore ocorrencias = cria_arvore();
  tabela hash = cria_tabela();
  pilha piramide = cria_pilha();
  readFile(carreira, ocorrencias, hash, piramide);

  return 0;
}

void readFile(fila f, arvore a, tabela t, pilha p)
{
  int input;
  FILE* file = fopen("seq.in", "r");
  while(fscanf(file, "%i", &input) == 1)
  {
    push(f, input);

    arvore aux = (arvore) malloc(sizeof(struct struct_arvore));
    aux->raiz = input;
    adiciona(a, aux);

    insereHash(t, input);

    empilha(p, input);
  }
}
