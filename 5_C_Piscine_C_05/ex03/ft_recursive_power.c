/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:23:28 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 16:29:35 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		if (nb == 1)
			return (1);
		if (nb == -1)
		{
			power *= -1;
			return (nb * ft_recursive_power(nb, power - 1));
		}
		return (0);
	}
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
