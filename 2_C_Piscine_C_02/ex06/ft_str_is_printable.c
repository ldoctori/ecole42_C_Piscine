/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:38:08 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/24 10:12:48 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	k;

	k = 1;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*(str))
	{
		if (*str >= 32 && *str <= 126)
		{
			k *= 1;
		}
		else
		{
			k *= 0;
		}
		str++;
	}
	return (k);
}
