/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:55:21 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 16:05:08 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	j;
	int	i;

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

int	ft_is_prime(int	nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2 )
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
