#include "lista.h"



int main()
{
    Lista *lst;

    lst = lst_cria();
    lst = lst_insere(lst, 23);
    lst = lst_insere(lst, 83);

    lst_imprime(lst);
}

