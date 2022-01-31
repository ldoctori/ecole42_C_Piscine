/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:47:26 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/27 13:50:27 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	num(char *str, unsigned int *i, unsigned int *number)
{
	int				count;
	unsigned int	buff_nb;
	buff_nb = 0;
	count = 0;
	if (str[*i] >= 48 && str[*i] <= 57)
	{
		*number = str[*i] - 48;
		(*i)++;
		while (str[*i] >= 48 && str[*i] <= 57)
		{
			*number = *number * 10 + str[*i] - 48;
			if(buff_nb > *number)
			return (1);
			buff_nb = *number;
			(*i)++;
		}
		if (str[*i] == '.' && (str[(*i) + 1] >= 48 && str[(*i) + 1] <= 57))
		return (1);
	}
	return (0);
}

unsigned int	if_space(char *str, unsigned int i)
{
	while ((str[i] < 48 || str[i] > 57)
		&& (str[i] != '-' && str[i] != '+'))
	{
		if (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (i);
}

int if_func(char *str, unsigned int i, unsigned int *number)
{
	i = if_space(str, i);
	while (str [i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= 48 && str[i] <= 57)
    {
		return (num (str, &i, number));
	}
//	else
//	{
		return (1);
//	}
	//return (i);
}

int	ft_atoi(char *str, unsigned int *number)
{	
	unsigned int	i;

	i = 0;

	return (if_func(str, i, number));
}
