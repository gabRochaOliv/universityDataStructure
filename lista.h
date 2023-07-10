#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED



#endif // LISTA_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;


Lista * lst_cria(void);

Lista* lst_insere(Lista* lst, int val);

void lst_imprime(Lista* lst);
