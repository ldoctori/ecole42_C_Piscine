/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:30 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 20:38:12 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	min(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	sub_matr_poit(t_arr *arr_s, int *max_i, int *max_j, int max_of_s)
{
	int	i;
	int	j;

	i = *max_i;
	while (i > *max_i - max_of_s)
	{
		j = *max_j;
		while (j > *max_j - max_of_s)
		{
			arr_s->arr[i][j] = 2;
			j--;
		}
		i--;
	}
}

void	max_finder(int **S, int *max_i, int *max_j, t_arr *arr_s)
{
	int	max_of_s;
	int	i;
	int	j;

	max_of_s = S[0][0];
	*max_i = 0;
	*max_j = 0;
	i = -1;
	while (++i < arr_s->size)
	{
		j = -1;
		while (++j < arr_s->ln)
		{
			if (max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				*max_i = i;
				*max_j = j;
			}
		}
	}
	sub_matr_poit(arr_s, max_i, max_j, max_of_s);
}

void	printMaxSubSquare(t_arr *arr_s, int i, int j, int k)
{
	int	**s;
	int	max_i;
	int	max_j;
	int	max_of_s;

	s = malloc(arr_s->size * sizeof(int *));
	while (++i < arr_s->size)
		s[i] = malloc((arr_s->ln + 1) * 4);
	while (++k < arr_s->size)
		s[k][0] = arr_s->arr[k][0];
	while (++j < arr_s->ln)
		s[0][j] = arr_s->arr[0][j];
	i = 0;
	while (++i < arr_s->size)
	{
		j = 0;
		while (++j < arr_s->ln)
		{
			if (arr_s->arr[i][j] == 1)
				s[i][j] = min(s[i][j - 1], s[i - 1][j], s[i - 1][j - 1]) + 1;
			else
				s[i][j] = 0;
		}
	}
	max_finder(s, &max_i, &max_j, arr_s);
}

int	rec_func(int argc, char **argv, int count, t_arr *arr_s)
{
	int	i;
	int	j;
	int	k;

	k = -1;
	i = -1;
	j = -1;
	if (argc < 2)
		return (1);
	if (valid_map(argv[count]) == 1)
	{
		count++;
		argc--;
	}
	else
	{
		arr_s = ft_display_file(argc, argv[count]);
		printMaxSubSquare(arr_s, i, j, k);
		print_new_map(arr_s);
		argc--;
		count++;
	}
	return (rec_func(argc, argv, count, arr_s));
}
