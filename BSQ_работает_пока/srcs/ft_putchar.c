/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:35:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 17:33:44 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
