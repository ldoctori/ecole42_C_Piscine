#include "ft_str_is_numeric.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 4;
    char str [] = {"12345A"};
    //write (1, ft_strncpy(dest, src, n) , 15);
    printf("%d", ft_str_is_numeric(str));
}
