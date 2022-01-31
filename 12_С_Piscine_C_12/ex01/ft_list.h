/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:45:45 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 13:51:36 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include<stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_push_front(t_list **begin_list, void *data);

#endif
