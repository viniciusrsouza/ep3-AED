#ifndef HASH_H
#define HASH_H

#include "lista.h"

typedef celula* tabela;

tabela cria_tabela();
void insereHash(tabela, int);
int contador(tabela, int);

#endif
