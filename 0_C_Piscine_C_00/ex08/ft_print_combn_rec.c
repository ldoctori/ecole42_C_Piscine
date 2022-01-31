/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:46:47 by ldoctori          #+#    #+#             */
/*   Updated: 2021/07/22 12:01:52 by ldoctori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int do_the_best (int i, int n)
{   char c;
    c = i + '0';
    write (1, &c, 1);
    n--;
    if (n > 0)
    {
        while (i < n)
        if (i+1 > 9){
            return 1;
        } else return do_the_best(i+1, n);
    }
    else return 1;
}
void ft_print_combn(int n)
{
    int i = 0;
    char cspace [2] = {',', ' '};
    while (i < n)
    {
      int a = do_the_best(i, n);
        write(1, &cspace, 2);
        
        if (a == 1)
        i++;
    }
}


