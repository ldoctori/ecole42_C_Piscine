/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:12:42 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 16:26:55 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <errno.h> 
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_display_file(int argc, char **argv, int i, int by);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		main(int argc, char **argv);
int		rec_func(int argc, char **argv, int i, int by);
int		ft_strlen(char *str);
#endif
