/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:12:42 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/03 16:46:53 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <errno.h> 
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_display_file(int argc, char **argv, int i);
void	ft_putstr(char *str);
int		main(int argc, char **argv);
int		rec_func(int argc, char **argv, int i);
#endif
