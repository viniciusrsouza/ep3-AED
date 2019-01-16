#include "arvore.h"
#include <stdlib.h>
#include <stdio.h>

// aloca uma arvore de raiz x na memória
// uma árvore não é alocada vazia
arvore cria_arvore()
{
  return (arvore) malloc(sizeof(struct struct_arvore));
}

// adiciona o inteiro x na árvore a
// algoritmo baseado no exemplo disponível em:
// https://www.ime.usp.br/~pf/algoritmos/aulas/binst.html
arvore adiciona(arvore a, arvore node)
{
  if(a == NULL) return node;

  else if(node->raiz < a->raiz)
    a->esq = adiciona(a->esq, node);
  else
    a->dir = adiciona(a->dir, node);
}

arvore buscabinaria(arvore a, int x)
{
  if(a->raiz == x) return a;
  else if(x < a->raiz) return buscabinaria(a->esq, x);
  else return buscabinaria(a->dir, x);
}
