/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:47:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 16:34:56 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	do_some2(int read_by, int op_file_descr, char *str, int by)
{	
	int		count;
	char	buff;

	count = 0;
	while (read_by)
	{			
		str[count] = buff;
		read_by = read(op_file_descr, &buff, 1);
		count++;
	}
	str[count++] = '\0';
	ft_putstr(str + count - 1 - by);
	free(str);
}

void	ft_open_read(int op_file_descr, char *arg, int by, int count)
{	
	char	buff;
	int		read_by;
	char	*str;

	read_by = read(op_file_descr, &buff, 1);
	if (read_by == -1)
	{
		ft_putstr(arg);
		ft_putstr(" : ");
		ft_putstr(strerror(errno));
		ft_putchar('\n');
		return ;
	}
	while (read_by)
	{			
		count++;
		read_by = read(op_file_descr, &buff, 1);
	}
	if (close(op_file_descr) == -1)
		return ;
	str = malloc(count + 1);
	op_file_descr = open(arg, O_RDONLY);
	read_by = read(op_file_descr, &buff, 1);
	do_some2(read_by, op_file_descr, str, by);
}

void	ft_display_file(int argc, char **argv, int i, int by)
{
	int		op_file_descr;
	int		errno;
	int		count;

	count = 0;
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
		if (argc > 4)
		{
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
		}
		ft_open_read(op_file_descr, argv[i], by, count);
		if (i < argc - 1)
			ft_putchar('\n');
	}	
}
