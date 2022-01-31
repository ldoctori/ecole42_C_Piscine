/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:39:38 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/30 20:18:35 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = malloc(4 * (max - min));
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
