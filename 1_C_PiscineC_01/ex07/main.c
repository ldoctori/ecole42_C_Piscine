#include "ft_rev_int_tab.c"
#include <stdio.h>
int main ()
{
    int size = 5;
    int tab [] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, size);
    printf("%i", tab[0]);
}
