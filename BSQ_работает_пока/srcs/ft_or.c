/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijenniff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:53:31 by ijenniff          #+#    #+#             */
/*   Updated: 2021/08/11 11:53:34 by ijenniff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int    ft_or(char *filename)
{
    int     fd;
    int     ret;
    char    c;
    
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (1);
    ret = read(fd, &c , 1);
    if (ret == -1)
        return (1);
    if(close (fd) == -1)
        return (1);
    return (0);
}
