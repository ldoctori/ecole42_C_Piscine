#include "ft_putstr_non_printable.c"
#include <unistd.h>

int main(void)
{
  char *str = "Coucou\ntu vas bien ?";
  ft_putstr_non_printable(str);
  return 0;
}
