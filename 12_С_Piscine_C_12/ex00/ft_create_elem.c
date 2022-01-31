/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:48:23 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 12:46:14 by ldoctori         ###   ########.fr       */
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
