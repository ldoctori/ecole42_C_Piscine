/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:40:18 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/04 17:51:31 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	do_some(int a, int b, int (*operations[])(int, int), int i)
{	
	operations[0] = add;
	operations[1] = sub;
	operations[2] = dev;
	operations[3] = mul;
	operations[4] = mod;
	ft_putnbr(operations[i](a, b));
	write(1, "\n", 1);
}

void	op_check(char **argv, int a, int b, int (*operations[])(int, int))
{
	if (ft_strcmp(argv[2], "+") == 0)
		do_some(a, b, operations, 0);
	else if (ft_strcmp(argv[2], "-") == 0)
		do_some(a, b, operations, 1);
	else if (ft_strcmp(argv[2], "/") == 0)
	{	
		if (b == 0)
			ft_putstr_norm("Stop : division by zero\n");
		else
			do_some(a, b, operations, 2);
	}
	else if (ft_strcmp(argv[2], "*") == 0)
		do_some(a, b, operations, 3);
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (b == 0)
			ft_putstr_norm("Stop : modulo by zero\n");
		else
			do_some(a, b, operations, 4);
	}
	else
		write(1, "0\n", 2);
}

int	main(int argc, char **argv)
{	
	int	a;
	int	b;
	int	(*operations[5])(int, int);

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op_check(argv, a, b, operations);
}
