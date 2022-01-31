#include "ft_strstr.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
   // unsigned int n = 7;
    char to_find [] = {""};
    char str [] = {"Yeah!BoooY!Hi!"};
    //printf("%d\n", ft_strstr(str, to_find));
   int i = 0;
   char *result = ft_strstr(str, to_find);
   while (result[i] != '\0')
    {
      i++;
    }
    write(1, result,i);
	return 0;
}
