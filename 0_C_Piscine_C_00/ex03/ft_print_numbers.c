/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:36:06 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 11:36:14 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers (void)
{
	char	c;
	int		i;

	i = 1;
	while (i < 10)
	{
		c = i + '0';
		write (1, &c, 1);
		i++;
	}
}