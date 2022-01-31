/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:16:32 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 13:16:39 by ldoctori         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int    dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = str_len(dest);
	src_len = str_len(src);
	i = 0;
	while (dest_len + i <= dest_len + src_len && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i + 1] = '\0';
	return (dest);
}
