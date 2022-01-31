/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:51:19 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 16:52:41 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		result = s1[i] - s2[i];
	}
	return (result);
}

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

void	ft_sort_char_tab(char *argv[], int argc)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_char_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
