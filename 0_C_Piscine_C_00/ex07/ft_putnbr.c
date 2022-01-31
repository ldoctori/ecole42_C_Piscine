/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:38:55 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 11:39:03 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb)
{
	char	nb2;
	int		nb3;
	int		denom = 1;
	if (nb == 0)
	{
		nb2 = nb + '0';
		write (1, &nb2, 1);
	}   
   if (nb < 0)
   {
	   nb = - nb;
	   nb2 = '-';
	   write (1, &nb2, 1);
   }
   nb3 = nb;
   while (nb3 > 0)
	{
		denom *= 10;
		nb3 = nb3 / 10;
	}
   while (nb > 0 || denom > 1)
   {
		nb2 = nb * 10 / denom + '0';
		nb = nb % (denom / 10);
		write (1, &nb2, 1);
		denom /= 10;
	}
}
