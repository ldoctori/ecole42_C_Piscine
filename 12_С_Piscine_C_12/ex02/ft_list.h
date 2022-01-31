/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:45:45 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/05 14:04:06 by ldoctori         ###   ########.fr       */
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

int	ft_list_size(t_list *begin_list);

#endif
