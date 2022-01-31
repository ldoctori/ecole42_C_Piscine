#include "ft_strjoin.c"
#include<unistd.h>
#include<stdio.h>
int main(void) {
    
    int size = 2;
    char *strs[] = {"jhdcj", "hdjcjd"};
    char sep[] = "...";
    //int i = 0;
    
   /* while (i < 7)
    {
        printf("%s\n", strs[i]);
        i++;
    }*/
    
    //printf("%s\n", ft_strjoin(size, strs, sep));
    char *ch = ft_strjoin(size, strs, sep);
    write(1, ch, ft_strlen(ch));
    
    char *zero = "\0";
    printf("%s", zero);
}


