#include"../include/ft.h"

/*#include<stdio.h>

#include<unistd.h>
#include"ft_atoi.c"
#include"ft_display_file.c"*/

int    sign(char *str)
{
    int    sign;
    int    i;
    i = 0;
    sign = 1;
    while ((str[i] < 48 || str[i] > 57) && str[i] != '\0' )
    {
        if (str[i] == '-')
            sign *= -1;
        (i)++;
    }
    return (sign);
}
unsigned int *write_nb(unsigned int nb)
{
	unsigned int i;
	unsigned int z;
	unsigned int y;
	int j =0;
	unsigned int buff_nb;
	unsigned int *arr_nb;

	arr_nb = malloc(sizeof(unsigned int) * (10 + 1));
	buff_nb = nb;
	i = 1;
	while(buff_nb  / 10 > 0)
	{
		buff_nb  = buff_nb  / 10;
		i *= 10;
	}
	buff_nb = nb;
	while (i > 1)
	{
		if (i == 10) 
		{
			if (buff_nb >= 10 && buff_nb <= 20)
			{
			arr_nb[j] = buff_nb;
			printf("%i, ", arr_nb[j]);
			break;
			}
			else
			{
			arr_nb[j] = buff_nb / 10 * 10;
			printf("%i, ", arr_nb[j]);
			arr_nb[j + 1] = buff_nb % 10;
			printf("%i, ", arr_nb[j + 1]);
			break;
			}
		}
		else{
		arr_nb[j] = buff_nb / i;
		printf("%i, ", arr_nb[j]);
		j++;
		buff_nb = buff_nb - arr_nb[j-1] * i;
		arr_nb[j] = i;
		if(i == 10000)
		{
		arr_nb[j - 1] = arr_nb[j - 1] * 10;
		arr_nb[j] = arr_nb[j]  / 10;

		}
		i = i / 10;
		printf("%i, ", arr_nb[j]);
		j++;
		}
    }
	return (arr_nb);
}

int main(int argc, char **argv)
{
	unsigned int *arr_nb;
    unsigned int nb_c = 0;
	
	int i = 0;

	if (argc > 3)
		write(1, "Error! To many arguments!\n", 27);
    else 
    {
        if (sign(argv[1]) == -1)
        {
            write(1, "error!\n", 7);
            return (0);
        }
        if (ft_atoi(argv[1], &nb_c) == 0)
			printf("%u\n", nb_c);
		else
			write(1, "error!\n", 7);
			arr_nb = write_nb(nb_c);
        while (i < 12)
        {
			ft_display_file(argv[2], arr_nb[i]);
            i++;
        }
    }
	
}
