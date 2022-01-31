#include "ft_div_mod.c"
#include <stdio.h>
int main (){
    
    int a, b, div, mod;
    a = 42;
    b = 10;
    ft_div_mod(a, b, &div, &mod);
    printf("%i, %i\n", div, mod);
}
