/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:26:48 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 16:02:00 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	j;
	int	i;

	if (nb <= 0)
		return (0);
	j = 1;
	i = 1;
	while (nb - i > 2)
	{
		j++;
		i += 2;
		nb = nb - i;
	}
	return (j);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
