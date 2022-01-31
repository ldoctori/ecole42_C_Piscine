/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:07:05 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 13:07:11 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len (char *str)
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

	dest_len = str_len(dest);
	src_len = str_len(src);
	i = 0;
	while (dest_len + i <= dest_len + src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i + 1] = '\0';
	return (dest);
}
