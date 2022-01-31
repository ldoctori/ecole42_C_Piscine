/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijenniff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:36:06 by ijenniff          #+#    #+#             */
/*   Updated: 2021/07/26 18:21:08 by ijenniff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		n;
	int		b;
    int     i;
    
    i = 0;
    while (str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return (-1);
        i++;
    }
	b = 0;
	while (*str >= '0' && *str <= '9')
	{
		b = b * 10;
		b = b + (*str - '0');
		str++;
	}
    return (b);
}
