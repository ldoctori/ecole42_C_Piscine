#include"ft.h"
#include<unistd.h>
#include<stdio.h>
int main()
{
	int a;
	int b;
    
    a = 1;
    b = 234;
	char str[] = {"ASDF"};
	char s1[] = {"ASDF"};
	char s2[] = {""};
	ft_putchar('a');
	//write(1,"\n",1);
	ft_swap(&a, &b);
    printf("%i", a);
	write(1,"\n",1);
	ft_putstr(str);
	write(1,"\n",1);
	printf("%i\n", ft_strlen(str));
     printf("%i\n", ft_strcmp(s1, s2));
}
