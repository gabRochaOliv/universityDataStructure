#include "lista.h"


typedef struct lista Lista;


struct lista{

    int info;
    Lista *prox;

};

Lista* lst_insere(Lista* lst, int val)
{
    Lista* novo =  (Lista*) malloc(sizeof(Lista));

    novo -> info = val;
    novo -> prox = lst;

    return novo;
}

Lista * lst_cria(void)
{

    return NULL;
}

void lst_imprime(Lista* lst)
{

    Lista* p;
    for(p =  lst; p!= NULL; p = p -> prox)
        printf("info = %d\n", p -> info);
}
