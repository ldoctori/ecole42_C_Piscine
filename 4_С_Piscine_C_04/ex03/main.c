#include "ft_atoi.c"
#include <stdio.h>
int main()
{
    char ch[] = {" -++--123asd25"};
    
    printf("%i\n", ft_atoi(ch));
}
