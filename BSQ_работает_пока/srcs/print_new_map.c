/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_new_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:38:52 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 20:40:00 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	print_new_map(t_arr *arr_s)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_s->size)
	{
		j = 0;
		while (j < arr_s->ln)
		{	
			if (arr_s->arr[i][j] == 0)
				ft_putchar(arr_s->obs);
			if (arr_s->arr[i][j] == 1)
				ft_putchar(arr_s->empty);
			if (arr_s->arr[i][j] == 2)
				ft_putchar(arr_s->full);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
