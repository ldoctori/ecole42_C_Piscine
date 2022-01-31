/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:58:37 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 14:34:14 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int	length;

	length = 0;
	while (begin_list)
	{	
		if (begin_list->next != 0)
			begin_list = begin_list->next;
		else
			break ;
	}
	return (begin_list);
}	
