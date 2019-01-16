#ifndef ARVORE_H
#define ARVORE_H

struct struct_arvore
{
  int raiz;
  struct struct_arvore* dir;
  struct struct_arvore* esq;
};

typedef struct struct_arvore* arvore;

arvore cria_arvore();
arvore adiciona(arvore, arvore);
arvore buscabinaria(arvore, int);

#endif
