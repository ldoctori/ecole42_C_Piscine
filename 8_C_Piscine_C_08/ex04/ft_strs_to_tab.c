/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:08:53 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/31 17:21:34 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		str_len;
	char	*copy;

	str_len = ft_strlen(src);
	copy = malloc(str_len + 1);
	if (copy == NULL)
		return (0);
	i = 0;
	while (i < str_len + 1)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		if (ft_strdup(av[i]) == NULL)
			return (0);
		result[i].copy = ft_strdup(av[i]);
	}
	result[i + 1].str = 0;
	return (result);
}
