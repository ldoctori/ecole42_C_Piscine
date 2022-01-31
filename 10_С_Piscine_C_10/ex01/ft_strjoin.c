/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:14:49 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/29 16:03:24 by ldoctori         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;
	int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (dest_len + i <= dest_len + src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i + 1] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		sum_len;
	int		i;

	if (size <= 0)
		return ("\0");
	sum_len = 0;
	i = -1;
	while (++i < size)
	{
		sum_len += ft_strlen(strs[i]);
	}
	sum_len += (size - 1) * ft_strlen(sep);
	result = (char *) malloc(sum_len + 33);
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
