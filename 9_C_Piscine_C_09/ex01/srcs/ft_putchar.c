/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:35:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 11:35:13 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "/Users/ldoctori/Documents/9_C_Piscine_C_09/ex01/includes/ft.h"
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

