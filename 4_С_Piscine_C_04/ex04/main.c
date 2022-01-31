#include "ft_putnbr_base.c"
#include <stdio.h>
int main(void) {
    int number = -2147483648;
  //char str2[] = {"AB"};
 // char str8[] = {"poneyvif"};
  //char str10[] = {"0123456789"};
  char str16[] = {"0123456789ABCDEF"};
  //char strwrong[] = {"0123456789ABCDEF\e"};
  
    ft_putnbr_base(number, str16);

  return 0;
}
