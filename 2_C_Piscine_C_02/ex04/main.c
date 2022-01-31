#include "ft_str_is_lowercase.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 4;
    char str [] = {"AAAc"};
    //write (1, ft_strncpy(dest, src, n) , 15);
    printf("%d", ft_str_is_lowercase(str));
}
