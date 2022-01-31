/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:38:30 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/06 20:08:51 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_preffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->item);
		if (root->left)
			btree_apply_preffix(root->left, applyf);
		if (root->right)
			btree_apply_preffix(root->right, applyf);
	}
}
