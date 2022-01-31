#include "ft_strlcpy.c"
#include <unistd.h>
void putstr (char *str)
{
  int i;

  i = 0;
  while(str[i]!= '\0')
  {
    i++;
  }
  write(1, str, i);
}
int main(void) {
  int size = 5;
  char dest[10];
  char src[] = {"Hello"};
  int result;

 result = ft_strlcpy (dest, src, size);
  putstr (dest);
  return 0;
}
