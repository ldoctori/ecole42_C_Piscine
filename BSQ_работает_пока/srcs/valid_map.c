/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijenniff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:29:26 by ijenniff          #+#    #+#             */
/*   Updated: 2021/08/10 19:10:19 by ijenniff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"


int	ft_valid_first_line(char *filename)
{
	char	empty;
	char	obs;
	char	full;
	int		len;

	len = ft_first_line_len(filename);
	if (len < 4)
		return (1);
	empty = ft_empty(filename);
	obs = ft_obs(filename);
	full = ft_full(filename);
	if (empty == obs || obs == full || empty == full)
		return (1);
	if ((empty < 32 && empty > 126) || (full < 32 && full > 126)
		|| (obs < 32 && obs > 126))
		return (1);
	return (0);
}

int	ft_valid_lines(char *filename)
{
	char			empty;
	char			obs;
	char			c;
	int				fd;

	empty = ft_empty(filename);
    obs = ft_obs(filename);
	fd = open(filename, O_RDONLY);
	ft_next_line(fd);
	while (read(fd, &c, 1))
	{
		if (c != empty && c != obs && c != '\n')
			return (1);
	}
	close (fd);
	return (0);
}

int	ft_valid_n(char *filename)
{
	char				*c;
	int					fd;
	int					i;
	int					ret;
	int		num_col;

	i = 0;
	fd = open(filename, O_RDONLY);
	num_col = ft_num_col(filename) + 1;
	ft_next_line(fd);
	c = (char *)malloc(sizeof(char) * num_col);
	if (c == NULL)
		return (0);
	ret = read(fd, c, num_col);
	while (ret)
	{
		if (c[ret - 1] != '\n')
			return (1);
		ret = read(fd, c, num_col);
	}
	free (c);
	close (fd);
	return (0);
}

int	ft_valid_num_col(char *filename)
{
	int				fd;
	int				i;
	int	next;
	int	num_col;
	int				num_line;

	fd = open(filename, O_RDONLY);
	num_line = ft_num_lines(filename);
	num_col = ft_num_col(filename);
	ft_next_line(fd);
	i = 0;
	while (i < num_line)
	{
		next = ft_next_col(fd);
		if (next != num_col)
			return (1);
		i++;
	}
	close (fd);
	return (0);
}

int	valid_map(char *argv)
{
    if (ft_or(argv) || ft_valid_first_line(argv))
    {
        write (2, "map error\n", 10);
        return (1);
    }
	if (ft_num_lines(argv) < 1 || ft_num_col(argv) < 1)
	{
		write (2, "map error\n", 10);
		return (1);
	}
	if (ft_valid_n(argv))
    {
        write (2, "\nmap error\n", 11);
        return (1);
    }
    if (valid_size_cmp(argv))
	{
		write (2, "map error\n", 10);
		return (1);
	}
	if (ft_valid_lines(argv) || ft_valid_num_col(argv))
	{
		write (2, "map error\n", 10);
		return (1);
	}
	return (0);
}
