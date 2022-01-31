/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:00:17 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/31 12:00:33 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(nbr)	(nbr % 2 == 0 ? TRUE : FALSE)
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

typedef int	t_bool;
void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
