#include <stdlib.h>
#include <unistd.h>
#include "ft_convert_base2.c"
int    str_len(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int    base_check (char *str)
{
    int    check;
    int    i;
    int    j;

    check = 0;
    i = 0;
    while (i < str_len(str))
    {
        j = i + 1;
    if (!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
      {
        check++;
      }
        while (j < str_len(str))
        {
            if (str[i] == str[j])
                check++;
            j++;
        }
        i++;
    }
    return (check);
}

int if_space(char *str, char *base_from)
{
  int i;
  int j;

  i = 0;
    while ((str[i] < 48 || str[i] > 57)
        && (str[i] != '-' && str[i] != '+'))
    {
        if (str[i] == '\t' || str[i] == '\n'
            || str[i] == '\v' || str[i] == '\f'
            || str[i] == '\r' || str[i] == ' ')
            i++;
        else
            return (0);
    }
  int sign = 1;                                 // надо разобраться
    while (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
            sign *= -1;
        i++;
  }
    return (i);
}
char *copy(int i, char *base_from, char *nbr, char *number)
{
  int z;
  int j;

  z = i;
  while(i < str_len(nbr))
  {
    j = -1;
    while(++j < str_len(base_from))
    {
      if (nbr[i] == base_from[j])
        number[i - z] = nbr[i];
    }
    i++;
  }
  return (number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to) //char *
{
  int i;
  char *number;
  int num;
  int j;
  
  num = 0;
  if (base_check(base_from) == 0 && base_check(base_to) == 0)
  {
    i = if_space(nbr,base_from );
    number =  malloc(str_len(nbr) - i);
    if (number == NULL)
      return (0);
    number = copy(i, base_from, nbr, number);
    num = go_to_ten(number, base_from);
	free(number);
	char *final_number = malloc(50);
	ft_putnbr_base(num, base_to, final_number);
	//write(1, number, str_len(number));
    return (final_number);
  }
  return (0);
}
