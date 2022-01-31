/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:59:34 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/31 17:59:59 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include<unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
