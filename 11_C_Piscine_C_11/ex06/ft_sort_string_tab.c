/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:52:54 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/04 18:53:55 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

void	ft_sort_string_tab(char **tab)
{	
	char	*tmp;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(tab);
	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}
