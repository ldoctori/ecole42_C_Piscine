/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:45:09 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/30 20:06:28 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	copy = malloc(str_len);
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
