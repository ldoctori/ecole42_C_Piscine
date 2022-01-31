/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_size_cmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:48:44 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 19:58:54 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	valid_size_cmp(char *filename)
{
	int		num_line;
	int		fd;
	int		i;
	char	buff;
	int		read_by;

	fd = open(filename, O_RDONLY);
	num_line = ft_num_lines(filename);
	ft_next_line(fd);
	i = 0;
	read_by = read(fd, &buff, 1);
	while (read_by)
	{
		if (buff == '\n')
			i++;
	read_by = read(fd, &buff, 1);
	}
	if(num_line != i)
		return (1);
	return (0);
}


