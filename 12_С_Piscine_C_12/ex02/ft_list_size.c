/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:58:37 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 14:13:42 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	length;

	length = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		length++;
	}
	return (length);
}	
