#include "ft_strcapitalize.c"
#include <unistd.h>
int main(void) {
  char str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  write (1, ft_strcapitalize(str), i);  
  return 0;
}
