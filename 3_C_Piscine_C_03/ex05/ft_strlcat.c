/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:25:55 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 15:08:14 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len (char *str)
{	
	unsigned int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = str_len(dest);
	src_len = str_len(src) + 1;
	i = 0;
	while (dest_len + i <= dest_len + src_len && dest_len + i < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i] = '\0';
	return (dest_len + src_len);
}
