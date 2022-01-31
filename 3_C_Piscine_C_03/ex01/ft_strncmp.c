/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:03:34 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/25 15:58:45 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	result;

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
