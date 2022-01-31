#include"ft_abs.h"
#include<unistd.h>
#include<stdio.h>
int main(int argc, char **argv)
{
    int value = -2147483648;
    printf("%i", ABS(value));
}
