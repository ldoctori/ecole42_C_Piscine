#include "ft_strdup.c"
#include<unistd.h>
#include<stdio.h>
int main(void) {
    char src[] = "Hey, Broo!DUUUUUUDE!";
    char *copy = ft_strdup(src);
   
    write(1, copy, ft_strlen(copy));
return 0;
}
