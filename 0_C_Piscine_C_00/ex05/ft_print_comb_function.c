#include <unistd.h>
#include <stdio.h>
void	do_write(int i, char c[], char nl)
{
	int		j;
	int		k;

	printf("%i\n", i);
	
	write(1,&nl,1);
	printf("\n");
while (i <= 9)
	{
		c[0] = i + '0';
		j = i + 1;
		while (j <= 9)
		{
			c[1] = j + '0';
			k = j + 1;
			while (k <= 9)
			{
				c[2] = k + '0';
				if (i == 7)
				{
					write (1, &c, 3);
					write (1, &nl, 1);
				}
				else
				{
					write (1, &c, 5);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_comb(void)
{
	char	c[5];
	char	nl;
	
	c[3] = ',';
	c[4] = ' ';
	nl = '\n';
	
	do_write(0, c, nl);
}
