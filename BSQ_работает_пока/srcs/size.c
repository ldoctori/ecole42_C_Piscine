/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijenniff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:19:03 by ijenniff          #+#    #+#             */
/*   Updated: 2021/08/11 11:15:43 by ijenniff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_next_line(int fd)
{
	int		ret;
	char	c;

	ret = read(fd, &c, 1);
	while (ret && c != '\n')
		ret = read(fd, &c, 1);
}

int	ft_num_col(char *filename)
{
	int	i;
	int				fd;
	char			c;

	i = 0;
	fd = open(filename, O_RDONLY);
	ft_next_line(fd);
	while (read (fd, &c, 1) && c != '\n')
		i++;
	return (i);
}

int	ft_next_col(int fd)
{
	int	i;
	char			c;

	i = 0;
	while (read (fd, &c, 1) && c != '\n')
		i++;
	return (i);
}
