/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:36:35 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 11:37:06 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_is_negative(int n)
{
	char	N;
	char	P;

	N = 'N';
	P = 'P';
	if (n >= 0)
		write (1, &P, 1);
	else
		write (1, &N, 1);
}
