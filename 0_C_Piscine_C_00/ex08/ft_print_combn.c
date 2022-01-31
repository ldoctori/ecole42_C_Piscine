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
void ft_print_combn(int n)
{
	int		i = 0;
	char		x[n];
	int		j = 0;
	int		k = 0;
    int     q = 0;
    int     w = 0;
    int     e = 0;
    int     r = 0;
    int     t = 0;
    int     y = 0;
	char  nl = '\n';

	if (n>=1)
	{
		while (i < 10)
		{
			x[0] = i + '0';
			if (n == 1)
			{
				write (1, &x[0], 1);
			}
			if (n > 1)
			{
				j = i + 1;
				while (j < 10)
				{
					x[1] = j + '0';
					if(n == 2)
					{
						write(1,&x,2);
						write (1, &nl, 1);
					}
					if (n > 2)
					{
						k = j + 1;
						while (k < 10)
						{
							x[2] = k + '0';
							if (n == 3)
							{
								write (1, &x, 3);
                                write (1, &nl, 1);
							}
                            if (n > 3){
                                q = k + 1;
                                while (q < 10){
                                    x[3] = q + '0';
                                    if (n == 4){
                                        write (1, &x, 4);
                                        write (1, &nl, 1);
                                    }
                                    if (n > 4){
                                        w = q + 1;
                                        while (w < 10){
                                        x[4] = w + '0';
                                        if (n == 5){
                                        write (1, &x, 5);
                                        write (1, &nl, 1);
                                        }
                                            if (n > 5){
                                                e = w + 1;
                                                while (e < 10){
                                                x[5] = e + '0';
                                                if (n == 6){
                                                write (1, &x, 6);
                                                write (1, &nl, 1);
                                                }
                                                    if (n > 6){
                                                        r = e + 1;
                                                        while (r < 10){
                                                        x[6] = r + '0';
                                                        if (n == 7){
                                                        write (1, &x, 7);
                                                        write (1, &nl, 1);
                                                        }
                                                            if (n > 7){
                                                                t = r + 1;
                                                                while (t < 10){
                                                                x[7] = t + '0';
                                                                if (n == 8){
                                                                write (1, &x, 8);
                                                                write (1, &nl, 1);
                                                                }
                                                                    if (n > 8){
                                                                        y = t + 1;
                                                                        while (y < 10){
                                                                        x[8] = y + '0';
                                                                        if (n == 9){
                                                                        write (1, &x, 9);
                                                                        write (1, &nl, 1);
                                                                        }
                                                                            y++;
                                                                    }}
                                                                    t++;
                                                            }}
                                                            r++;
                                                    }}
                                                    e++;
                                            }}
                                            w++;
                                    }}
                                    q++;
                                }}
							k++;						
						}}
				j++;	
			}}
		i++;	
}}
}


