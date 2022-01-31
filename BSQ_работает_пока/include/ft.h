/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:12:42 by ldoctori          #+#    #+#             */
/*   Updated: 2021/08/11 20:45:05 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_arr
{
	int		**arr;
	int		size;
	int		ln;
	char	empty;
	char	obs;
	char	full;
}	t_arr;

void	ft_putchar(char c);
t_arr	*ft_display_file(int argc, char *argv);
void	ft_putstr(char *str);
int		main(int argc, char **argv);
void	print_new_map(t_arr *arr_s);
int		valid_map(char *argv);
int		ft_num_lines(char *filename);
char	ft_empty(char *filename);
char	ft_obs(char *filename);
char	ft_full(char *filename);
int		ft_first_line_len(char *filename);
void	ft_next_line(int fd);
int		ft_num_col(char *filename);
int		ft_next_col(int fd);
int		ft_atoi(char *str);
int		ft_or(char *filename);
int		rec_func(int argc, char **argv, int i, t_arr *arr_s);
void	ft_std_input(void);
int		min(int a, int b, int c);
void	sub_matr_poit(t_arr *arr_s, int *max_i, int *max_j, int max_of_s);
void	max_finder(int **S, int *max_i, int *max_j, t_arr *arr_s);
void	printMaxSubSquare(t_arr *arr_s, int i, int j, int k);
int		valid_size_cmp(char *filename);
#endif
