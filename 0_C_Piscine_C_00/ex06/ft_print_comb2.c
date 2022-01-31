/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:38:20 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 11:38:30 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	do_write(int i, int j, char a1, char a2, char b1, char b2)
{
	char	cspace[2] = {',', ' '};
	char	nl;

	nl = '\n';
	if (i == 98 && j == 99)
	{
		write (1, &a1, 1);
		write (1, &a2, 1);
		write (1, &cspace[1], 1);
		write (1, &b1, 1);
		write (1, &b2, 1);
		write (1, &nl, 1);
	}
	else
	{
		write (1, &a1, 1);
		write (1, &a2, 1);
		write (1, &cspace[1], 1);
		write (1, &b1, 1);
		write (1, &b2, 1);
		write (1, &cspace, 2);
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		a1 = (i % 100) / 10 + '0';
		a2 = (i % 10) + '0';
		j = i + 1;
		while (j <= 99)
		{
			b1 = (j % 100) / 10 + '0';
			b2 = (j % 10) + '0';
			do_write(i, j, a1, a2, b1, b2);
			j++;
		}
		i++;
	}
}
