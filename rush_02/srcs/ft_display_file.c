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

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, (str + i), 1);
		i++;
	}
}

int	ft_open_read(int op_file_descr, unsigned int nb_c)
{	
	char			buff;
	int				read_by;
	char			*dict_number;
	int				count;
	unsigned int	nb_f;

	nb_f = 0;
	count = 0;
	dict_number = malloc(sizeof(char) * 10 + 1);
	read_by = read(op_file_descr, &buff, 1);
	while (read_by && buff >= 48 && buff <= 57)
	{			
		if (read_by == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (-1);
		}
		dict_number[count] = buff;
		count++;
		read_by = read(op_file_descr, &buff, 1);
	}
	dict_number[count] = '\0';
	ft_atoi(dict_number, &nb_f);
    free(dict_number);
	//printf("%u\n", nb_f);
	if (nb_f == nb_c)
	{
        while (buff != '\n')
        {
            read(op_file_descr, &buff, 1);
            write(1, &buff, 1);
        }
		//printf("%u\n", nb_f);
		if (close(op_file_descr) == -1)
            return (-1);
		return (1);
	}
	else
	{
		while (buff != '\n')
		{
			read(op_file_descr, &buff, 1);
		}
		return (ft_open_read(op_file_descr, nb_c));
	}
}

int		ft_display_file(char *argv, unsigned int nb_c)
{
	int		op_file_descr;

	/*if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");*/
//	else
	//{
		op_file_descr = open(argv, O_RDONLY);
		if (op_file_descr == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (-1);
		}
		else
		{
			return (ft_open_read(op_file_descr, nb_c));
		}
//	}
}
