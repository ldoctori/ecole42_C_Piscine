#include "ft_sort_int_tab.c"
#include <stdio.h>
int main ()
{   int size = 5;
    int tab [] = {7, 2, 1, 4, 3};
    ft_sort_int_tab(tab, size);
    
    for (int i = 0; i < size; i++){
     printf("%d, ", tab[i]);
    }
}
