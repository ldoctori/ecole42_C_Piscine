#include "ft_range.c"
#include<unistd.h>
#include<stdio.h>
int main(void) {
    int max = 0;
    int min = -15;
    int *arr = ft_range(min, max);
    int i = 0;
    while(i <  max - min)
    {    printf("%d, ", arr[i]);
        i++;
    }
return 0;
}


