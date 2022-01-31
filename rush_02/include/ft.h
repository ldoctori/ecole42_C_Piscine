/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:12:42 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/08 12:57:55 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<unistd.h>
#include<stdlib.h>

#include<stdio.h>

typedef struct s_list
{
    struct s_list   *next;
    unsigned int    data;
}   t_list;

int main(int argc, char **argv);
int ft_atoi(char *str, unsigned int *nb_c);
int ft_display_file(char *argv, unsigned int nb_c);

#endif
