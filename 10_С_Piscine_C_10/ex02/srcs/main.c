/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:21:31 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 16:13:17 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	do_some(char *argv, int *by)
{
	int	j;

	j = 0;
	while (j < ft_strlen(argv))
	{
		if (argv[j] < 48 || argv[j] > 57)
		{	
			ft_putstr("illegal offset -- ");
			ft_putstr(argv);
			return (1);
		}
		*by *= 10;
		*by += argv[j] - '0';
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	by;

	by = 0;
	if (argc < 4)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}	
	if (argc > 3)
	{
		if (ft_strcmp(argv[1], "-c") == 0)
		{			
			if (do_some(argv[2], &by) == 1)
				return (0);
		}
		i = 3;
		rec_func(argc, argv, i, by);
	}
}
