/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:54:46 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/24 20:50:26 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar (char c)
{
	write(1, &c, 1);
}

void	putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void	ascii_code(int j)
{
	char	*ch;

	ch = "123456789abcdef";
	if (j > 16)
	{
		putchar(ch[j / 16]);
		putchar(ch[(j - (16 * (j / 16))) % 16]);
	}
	else
	{
		putchar ('0');
		if ((ch[j % 16] >= 'A') && (ch[j % 16] <= 'F'))
		{
			ch[j % 16] = (ch[j % 16] - 'A') + 'a';
		}
		putchar(ch[j % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	z;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			putchar ('\\');
			j = (int)str[i];
			ascii_code(j);
		}
		else
			putchar (str[i]);
		i++;
	}
}
