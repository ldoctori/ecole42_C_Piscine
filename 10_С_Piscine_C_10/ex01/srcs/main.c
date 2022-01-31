/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:21:31 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 09:34:04 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}	
	i = 1;
	rec_func(argc, argv, i);
}
