#include "ft_strlowcase.c"
#include <unistd.h>
#include <stdio.h>
int main ()
{
    unsigned int n = 4;
    char str [] = {"ASdf"};
    write (1, ft_strlowcase(str) , 4);
    //for (int i = 0; i < 15; i++){
      //  printf("%s", *(ft_strupcase(str)));
    //}
}
