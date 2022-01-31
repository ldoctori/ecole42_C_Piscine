#include<stdio.h>
#include"ft_any.c"

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		(str_len)++;
	}
	return (str_len);
}

int main()
{
	char *tab[3] = {"1", ""};
	
	printf("%i", ft_any(tab, &ft_strlen));
}
