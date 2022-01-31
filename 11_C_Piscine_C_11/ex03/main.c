#include<stdio.h>
#include"ft_count_if.c"

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
	char *tab[4] = {"2", "123", "", "123124314"};
	
	printf("%i", ft_count_if(tab, 4, &ft_strlen));
}
