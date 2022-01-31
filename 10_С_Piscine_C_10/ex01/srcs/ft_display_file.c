/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:47:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 10:09:50 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
void	ft_open_read(int op_file_descr, char *arg)
{	
	char	buff;
	int		read_by;
	int		errno;

	read_by = read(op_file_descr, &buff, 1);
	while (read_by)
	{			
		if (read_by == -1)
		{
			ft_putstr(arg);
			ft_putstr(" : ");
			ft_putstr(strerror(errno));
			ft_putchar('\n');
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

void	ft_display_file(int argc, char **argv, int i)
{
	int		op_file_descr;
	int		errno;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else
	{
		op_file_descr = open(argv[i], O_RDONLY);
		if (op_file_descr == -1)
		{	
			ft_putstr(argv[i]);
			ft_putstr(" : ");
			ft_putstr(strerror(errno));
			ft_putchar('\n');
		}
		else
		{
			ft_open_read(op_file_descr, argv[i]);
		}
	}
}
