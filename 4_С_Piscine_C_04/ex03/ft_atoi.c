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
int	sign(char *str, int *i)
{
	int	sign;

	*i = 0;
	sign = 1;
	while (str[*i] < 48 || str[*i] > 57)
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	num (char *str, int *i)
{
	int	number;

	number = 0;
	if (str[*i] >= 48 && str[*i] <= 57)
	{
		number = str[*i] - 48;
		(*i)++;
		while (str[*i] >= 48 && str[*i] <= 57)
		{
			number = number * 10 + str[*i] - 48;
			(*i)++;
		}
	}
	return (number);
}

int	if_space(char *str, int i)
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

int	if_func (char *str, int i)
{
	i = if_space(str, i);
	while (str [i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= 48 && str[i] <= 57)
	{
		return (sign(str, &i) * num (str, &i));
	}
	else
	{
		return (0);
	}
	return (i);
}

int	ft_atoi(char *str)
{	
	int	i;

	i = 0;
	return (if_func(str, i));
}
