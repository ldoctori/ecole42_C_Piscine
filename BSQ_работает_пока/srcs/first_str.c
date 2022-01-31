/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijenniff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:03:49 by ijenniff          #+#    #+#             */
/*   Updated: 2021/08/10 18:58:46 by ijenniff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_first_line_len(char *filename)
{
	int		i;
	int		len;
	int		fd;
	char	c;

	i = 0;
	len = 0;
	fd = open(filename, O_RDONLY);
	while (read (fd, &c, 1) && c != '\n')
		len++;
	close (fd);
	return (len);
}

char	ft_full(char *filename)
{
	char	full;
	int		i;
	int		fd;
	char	*c;
	int		len;

	i = 0;
	len = ft_first_line_len (filename);
	fd = open(filename, O_RDONLY);
	c = (char *)malloc(sizeof(char) * len);
	if (c == NULL)
		return ((char)((void *) 0));
	while (read (fd, &c[i], 1) && c[i] != '\n')
		i++;
	full = c[i - 1];
	free (c);
	close (fd);
	return (full);
}

char	ft_obs(char *filename)
{
	char	obs;
	int		i;
	int		fd;
	char	*c;
	int		len;

	i = 0;
	fd = open(filename, O_RDONLY);
	len = ft_first_line_len(filename);
	c = (char *)malloc(sizeof(char) * len);
	if (c == NULL)
		return ((char)((void *) 0));
	while (read (fd, &c[i], 1) && c[i] != '\n')
		i++;
	obs = c[i - 2];
	free (c);
	close (fd);
	return (obs);
}

char	ft_empty(char *filename)
{
	char	empty;
	int		i;
	int		fd;
	char	*c;
	int		len;

	i = 0;
	fd = open(filename, O_RDONLY);
	len = ft_first_line_len(filename);
	c = (char *)malloc(sizeof(char) * len);
	if (c == NULL)
		return ((char)((void *) 0));
	while (read (fd, &c[i], 1) && c[i] != '\n')
		i++;
	empty = c[i - 3];
	free (c);
	close (fd);
	return (empty);
}

int	ft_num_lines(char *filename)
{
	char	*num;
	int		len;
	int		i;
	int		fd;
	char	*c;

	len = ft_first_line_len(filename);
	fd = open(filename, O_RDONLY);
	c = (char *)malloc(sizeof(char) * len);
	num = (char *)malloc(sizeof(char) * (len - 3));
	if (c == NULL || num == NULL)
		return (0);
	i = 0;
	while (read (fd, &c[i], 1) && i < (len - 3))
	{
		num[i] = c[i];
		i++;
	}
    num[i] = '\0';
	free (c);
	close (fd);
	return (ft_atoi(num));
}
