/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:04:57 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/27 18:12:57 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	putchar_(char *base, char c, int count, int flag, int num[10])
{
	int i;
	i = 0;
	if (flag == 0)
	{
		while(i < count)
		{
			write(1, &c, 1);
			i++;
		}
	}
	else
	{
		while(i < 10)
		{
			write(1, &base[num[i]], 1);
			i++;
		}
	}
}

int	repeat_symbol_search(char *str, int str_len)
{
    int	check;
    int	i;
    int	j;

	check = 0;
	i = 0;
	while (i < str_len)
	{
		if ((str[i] < 48 || str[i] > 57)
			&& (str[i] < 65 || str[i] > 90)
			&& (str[i] < 97 || str[i] > 122))
		{
			check++;
		}
		j = i + 1;
		while (j < str_len)
		{
			if (str[i] == str[j])
				check++;
			j++;
		}
		i++;
	}
	i = 0;
	return (check);
}

void write_min(int i, char *base, int write_num[3], int flag)
{
	int num[10];
	int putchar_count[3];
	
	putchar_count[0] = 31;
	putchar_count[1] = 10;
	putchar_count[2] = 7;
	if (flag == 0)
	{
		write (1, &base[write_num[i]], 1);
		putchar_(base, base[0], putchar_count[i], 0, num);
	}
	else
	{
		num[0] = 2;
		num[1] = 1;
		num[2] = 4;
		num[3] = 7;
		num[4] = 4;
		num[5] = 8;
		num[6] = 3;
		num[7] = 6;
		num[8] = 4;
		num[9] = 8;
		putchar_(base, base[0], 1, 1, num);
	}
}

int	if_min( int nbr, char *base, int str_len)
{
	int i;
	int base_num[3];
	int write_num[3];

	base_num[0] = 2;
	base_num[1] = 8;
	base_num[2] = 16;
	write_num[0] = 1;
	write_num[1] = 2;
	write_num[2] = 8;
	i = 0;
	if (nbr == -2147483648)
	{
		while (i < 3)
		{
			if (str_len == base_num[i])
				write_min(i, base, write_num,  0);
			i++;
		}
		if (str_len == 10)
			rite_min(0, base, write_num, 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int    str_len;

	str_len = 0;
	while (base[str_len] != '\0')
	{
		str_len++;
	}
	if ((str_len > 1) && (repeat_symbol_search (base, str_len) == 0))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (if_min(nbr, base, str_len) == 0)
		{
			if (nbr >= str_len)
			{
				ft_putnbr_base(nbr / str_len, base);
				ft_putnbr_base(nbr % str_len, base);
			}
			else
				write (1, &base[nbr], 1);
		}
	}
}
