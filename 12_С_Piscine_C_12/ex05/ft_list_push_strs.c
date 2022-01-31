/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:23:15 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 18:31:45 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (t == NULL)
		return (0);
	t->next = NULL;
	t->data = data;
	return (t);
}

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*t;
	tlist	*begin;
	int i;
	
	i = 1;
	t = ft_create_elem(strs[0]);
	begin = t;
	while (i < size)
	{
		t = ft_create_elem(strs[i]);
		t->next = tmp;
		tmp = t;
		i++;
	}
	return (t);
}	
