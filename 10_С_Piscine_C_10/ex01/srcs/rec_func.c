/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:30 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/02 18:39:40 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	rec_func(int argc, char **argv, int i)
{
	if (argc < 2)
		return (1);
	ft_display_file(argc, argv, i);
	argc--;
	i++;
	return (rec_func(argc, argv, i));
}
