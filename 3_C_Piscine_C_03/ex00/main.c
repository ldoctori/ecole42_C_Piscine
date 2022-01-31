#include "ft_strcmp.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    char s1 [] = {"Good mo"};
    char s2 [] = {"Good mor"};
    printf("%d\n", ft_strcmp(s1, s2));
	return 0;
}
