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
    unsigned int    nb;
    unsigned int    order;
}   t_list;

int     main();
void    ft_list_push_back(t_list *begin_list, unsigned int nb, unsigned int order);
t_list  *ft_list_push_center(unsigned int nb, t_list *next, unsigned int order);
void    ft_remove_elem(t_list *begin_list);
#endif
