#include<stdlib.h>
#include<unistd.h>
int str_len(char *str);
// перенести в другое .с

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;
	int	i;

	write(1, dest, str_len(dest));
	write(1, "\n", 1);	dest_len = str_len(dest);
	src_len = str_len(src);
	i = 0;
	while (dest_len + i <= dest_len + src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i + 1] = '\0';
	write(1, dest, str_len(dest));
	write(1, "\n", 1);
	return (dest);
}
char   *ft_putnbr_base(int nbr, char *base, char *final_number)
{
	char *buff;

	buff = malloc(2);
	
    if (nbr < 0)
    {
      nbr = -nbr;
    }
    if (nbr >= str_len(base))
    {
      ft_putnbr_base(nbr / str_len(base), base, final_number);
      ft_putnbr_base(nbr % str_len(base), base, final_number);
    }
    else
    {	
		*buff = base[nbr];
		final_number = ft_strcat(final_number, buff);
	//	number2[i] = base[nbr];
		//write(1, &number2[i], 1);
		//i++;
    }
	//write(1,"\n",1);
	return(final_number);//похоже рекурсия обнуляет i поэтому возвращается пустой number|| 
}


int    ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

int go_to_ten(char *number, char *base_from)
{
  int i;
  int j;
  int num;

  i = 0;
    num = 0;
  while(i < str_len(number))
  {
    j = -1;
    while(++j < str_len(base_from))
    {
      if (number[i] == base_from[j])
        num += j * ft_recursive_power(str_len(base_from), str_len(number) - i - 1) ;
    }
    i++;
  }
  return (num);
}
// перенести в другое .с
