#include "ft_strncmp.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 4;
    char s1 [] = {"good morniG"};
    char s2 [] = {"Good mornig"};
    printf("%d\n", ft_strncmp(s1, s2, n));
	return 0;
}
