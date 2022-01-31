#include "ft_strlcat.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    int size = 6;
    char src [] = {"good morniG"};
    char dest[6] = {"Hey!"};
    //printf("%d\n", ft_strcat(dest, src));
    int i;
    i = 0;
    int result = ft_strlcat(dest, src, size);
   while (dest[i] != '\0')
    {
        i++;
    }
    printf("%d\n", result);
    
    write(1, dest,i);
    
    return 0;
}
