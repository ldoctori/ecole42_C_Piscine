/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:06:15 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/06 11:06:22 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct s_btree
{
	struct s_btree	*prev;
	struct s_btree	*next;
	void			*item;
}	t_btree;

t_btree	*btree_create_node(void *item);

#endif
