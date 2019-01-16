#ifndef FILA_H
#define FILA_H

#include "lista.h"

struct struct_fila
{
  celula l;
};

typedef struct struct_fila* fila;

void push(fila, int);
int pop(fila);
fila cria_fila();

#endif