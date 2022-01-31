#include "ft_ultimate_div_mod.c"
#include <stdio.h>
int main (){
    
    int a, b;
    a = 500;
    b = 11;
    ft_ultimate_div_mod(&a, &b);
    printf("%i, %i\n", a, b);
}
