/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:12:42 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/04 17:34:44 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<unistd.h>

int		main(int argc, char **argv);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr_norm(char *str);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		sub(int a, int b);
int		dev(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
#endif
