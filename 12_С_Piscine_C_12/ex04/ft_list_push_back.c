/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:23:15 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 16:23:18 by ldoctori         ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*t;

	if (*begin_list)
	{	
		t = *begin_list;
		while (t->next)
			t = t->next;
		t->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}	
