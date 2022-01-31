/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:47:02 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 19:19:23 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include <stdlib.h>
char	ft_open_read(int op_file_descr)
{
	char	buff;
	int		read_by;

	read_by = read(op_file_descr, &buff, 1);
	if (read_by == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ('\0');
	}
	return (buff);
}

int	file_str_ln(int op_file_descr)
{
	int		ln;
	int		read_by;
	char	buff;

	ln = 0;
	read_by = read(op_file_descr, &buff, 1);
	while (read_by && buff != '\n')
		read_by = read(op_file_descr, &buff, 1);
	read_by = read(op_file_descr, &buff, 1);
	while (buff != '\n')
	{
		if (read_by == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (0);
		}
		ln++;
		read_by = read(op_file_descr, &buff, 1);
	}
	if (close(op_file_descr) == -1)
		return (0);
	return (ln);
}

void	array_build(int op_file_descr, t_arr *arr_s)
{
	int		i;
	char	buff;
	int		j;

	i = 0;
	read(op_file_descr, &buff, 1);
	while (buff != '\n')
		read(op_file_descr, &buff, 1);
	while (i < arr_s->size)
	{
		read(op_file_descr, &buff, 1);
		j = 0;
		while (buff != '\n')
		{
			if (buff == arr_s->empty)
				arr_s->arr[i][j] = 1;
			if (buff == arr_s->obs)
				arr_s->arr[i][j] = 0;
			j++;
			buff = ft_open_read(op_file_descr);
		}
		i++;
	}
	if (close(op_file_descr) == -1)
		return ;
}

t_arr	*ft_display_file(int argc, char *argv)
{
	int		op_file_descr;
	t_arr	*arr_s;
	int		i;

	arr_s = malloc(sizeof(t_arr));
	arr_s->size = ft_num_lines(argv);
	op_file_descr = open(argv, O_RDONLY);
	arr_s->empty = ft_empty(argv);
	arr_s->full = ft_full(argv);
	arr_s->obs = ft_obs(argv);
	i = 0;
	arr_s->ln = file_str_ln(op_file_descr);
	arr_s->arr = malloc(arr_s->size * sizeof(int *));
	while (i < arr_s->size)
	{
		arr_s->arr[i] = malloc((arr_s->ln + 1) * 4);
		i++;
	}
	op_file_descr = open(argv, O_RDONLY);
	array_build(op_file_descr, arr_s);
	return (arr_s);
}
