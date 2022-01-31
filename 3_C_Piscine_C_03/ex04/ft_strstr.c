/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:17:07 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 17:09:43 by ldoctori         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
		result = s1[i] - s2[i];
	}
	return (result);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*p;
    
    if (to_find[0] == '\0')
        return (str);
	i = 0;
	while (str[i] != '0')
	{
		if (str[i] == to_find[0])
		{
			p = str + i;
			if (ft_strncmp(p, to_find, str_len(to_find)) == 0)
				return (p);
		}
		i++;
	}
	return (0);
}
