/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:38:08 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/24 19:22:56 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	lowercase(int i, char str_lowercase, char str)
{
	if ((str >= 32 && str <= 47)
		|| (str >= 58 && str <= 64)
		|| (str >= 91 && str <= 96)
		|| (str >= 123 && str <= 126))
	{
		str_lowercase = (str_lowercase - 'a') + 'A';
	}
	return (str_lowercase);
}

char	upcase(int i, char str_upcase, char str)
{
	if (i >= 1)
	{
		if ((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z')
			|| (str >= '0' && str <= '9'))
		{
			str_upcase = (str_upcase - 'A') + 'a';
		}
	}
	return (str_upcase);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (i >= 1)
				str[i] = lowercase(i, str[i], str[i - 1]);
			else
				str[i] = (str[i] - 'a') + 'A';
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = lowercase(i, str[i], str[i - 1]);
		i++;
	}
	return (str);
}
