#include "ft_ultimate_range.c"
#include<unistd.h>
#include<stdio.h>
int main(void) {
    int min = -2147483648;
    int max = -2147483645;
    int *arr;
    int size = ft_ultimate_range(&arr, min, max);
    int i = 0;
    
    printf("%d\n", size);
    while (i < max - min)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    
}


