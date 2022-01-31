/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:03:57 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/06 11:05:33 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree == NULL)
		return (0);
	tree->next = NULL;
	tree->prev = NULL;
	tree->item = item;
	return (tree);
}
