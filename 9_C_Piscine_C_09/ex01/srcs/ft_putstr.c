/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:38:08 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/23 08:04:49 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "/Users/ldoctori/Documents/9_C_Piscine_C_09/ex01/includes/ft.h"
void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, (str + i), 1);
		i++;
	}
}
