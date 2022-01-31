/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:21:31 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 17:36:30 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"


int	main(int argc, char **argv)
{
	t_arr	*arr_s;
	int		i;

	i = 1;
	if (argc < 2)
	{
		ft_std_input();
		if (valid_map("./standardin.txt") == 1)
			return (0);
		arr_s = ft_display_file(argc, "./standardin.txt");
		printMaxSubSquare(arr_s, -1, -1, -1);
		print_new_map(arr_s);
	}
	else
		rec_func(argc, argv, i, arr_s);
}
