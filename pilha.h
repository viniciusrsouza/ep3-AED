#ifndef PILHA_H
#define PILHA_H

#include "lista.h"

struct struct_pilha
{
  celula l;
};

typedef struct struct_pilha* pilha;

pilha cria_pilha();
void empilha(pilha, int);
int desempilha(pilha);

#endif
