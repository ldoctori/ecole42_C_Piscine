/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:47:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/02 16:13:47 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_open_read(int op_file_descr)
{	
	char	buff;
	int		read_by;

	read_by = read(op_file_descr, &buff, 1);
	while (read_by)
	{			
		if (read_by == -1)
		{
			ft_putstr("Cannot read file.\n");
			return ;
		}
		ft_putchar(buff);
		read_by = read(op_file_descr, &buff, 1);
	}
	if (close(op_file_descr) == -1)
		return ;
	else
		ft_putstr("\n");
}

void	ft_display_file(int argc, char **argv)
{
	int		op_file_descr;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		op_file_descr = open(argv[1], O_RDONLY);
		if (op_file_descr == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			ft_open_read(op_file_descr);
		}
	}
}
