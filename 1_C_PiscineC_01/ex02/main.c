#include "ft_swap.c"
#include <stdio.h>
int main (){
    int a = 1 , b = 100;
    printf("%i, %i\n", a, b);
	ft_swap(&a, &b);
    printf("%i, %i\n", a, b);
}
