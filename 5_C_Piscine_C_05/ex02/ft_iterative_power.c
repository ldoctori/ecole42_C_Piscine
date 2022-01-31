/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:55:15 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 16:33:59 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		if (nb == 1)
			return (1);
		if (nb == -1)
		{
			power *= -1;
		}
		else
			return (0);
	}
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
