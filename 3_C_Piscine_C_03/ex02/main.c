#include "ft_strcat.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 1;
    char src [] = {"good morniG"};
    char dest [20] = {"Hey!"};
    //printf("%d\n", ft_strcat(dest, src));
    write(1, ft_strcat(dest, src), 20);
	return 0;
}
