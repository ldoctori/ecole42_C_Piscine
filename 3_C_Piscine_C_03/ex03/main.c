#include "ft_strncat.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 12;
    char src [] = {"good morniG"};
    char dest [10] = {"Hey!"};
    //printf("%d\n", ft_strcat(dest, src));
    int i;
    i = 0;
    char *result = ft_strncat(dest, src, n);
    while (result[i] != '\0')
    {
      i++;
    }
    write(1, result,i);
    return 0;
	return 0;
}
