#include "ft_convert_base.c"
#include<unistd.h>
#include<stdio.h>
int main(void) {
  char nbr[] = {" ---+--+123"};
  char base_from[] = {"0123456789ABCDEF"};
  char base_to[] = {"01234567"};
 // printf("%s", base_to);

    char *n2 = ft_convert_base(nbr,base_from,base_to);
    write(1, n2, str_len(n2));
    printf("len of n2 = %i", str_len(n2));
 // printf("%s\n",  ft_convert_base(nbr,base_from,base_to));
  return 0;
}


