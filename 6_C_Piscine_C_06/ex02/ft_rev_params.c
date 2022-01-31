/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:55:29 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/28 11:44:15 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	main(int argc, char *argv[])
{	
	int	i;

	i = argc;
	while (i > 1)
	{
		write(1, argv[i - 1], ft_strlen(argv[i - 1]));
		write(1, "\n", 1);
		i--;
	}
}
