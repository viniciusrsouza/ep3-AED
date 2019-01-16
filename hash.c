#include "hash.h"
#include <stdlib.h>
#include <stdio.h>

#define SIZE 100

int hashCode(int X){ return X % SIZE; }

// cria uma tabela hash de tamanho
// definido no pré processamento
tabela cria_tabela()
{
  tabela hash = (celula*) malloc(SIZE * sizeof(celula));
  for(int i = 0; i<SIZE; i++) hash[i] = cria_celula();
  return hash;
}

// insere o x na posição hash(x)
// da tabela hash
void insereHash(tabela hash, int x)
{
  insere(hash[hashCode(x)], x);
}

// conta a quantidade de nós que o inteiro x
// aparece na tabela hash e remove todos
int contador(tabela hash, int x)
{
  int total = contaLista(hash[hashCode(x)]);
  removetodos(hash[hashCode(x)], x);
  int novo = contaLista(hash[hashCode(x)]);
  return total - novo;

}
