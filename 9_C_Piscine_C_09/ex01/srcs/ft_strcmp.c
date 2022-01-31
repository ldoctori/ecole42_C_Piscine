/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 08:32:19 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 19:13:43 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "/Users/ldoctori/Documents/9_C_Piscine_C_09/ex01/includes/ft.h"
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
