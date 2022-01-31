#include"ft_foreach.c"

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	norm(int nb)
{
	int		i;
	char	nb_txt[12];
	int		denom;
	int		nb2;

	nb2 = nb;
	denom = 10;
	i = 0;
	if (nb2 < 0)
		nb2 *= -1;
	while (nb2 != 0)
	{
		nb_txt[i] = (nb2 % denom) + '0';
		nb2 /= denom;
		i++;
	}
	if (nb < 0)
	{
		nb_txt[i] = '-';
		nb_txt[i + 1] = '\0';
	}
	else
		nb_txt[i] = '\0';
	ft_putstr(nb_txt);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("8463847412-");
	}
	else if (nb == 0)
	{
		ft_putstr("0");
	}
	else
		norm (nb);
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	ft_foreach(arr, 10, ft_putnbr);
}
