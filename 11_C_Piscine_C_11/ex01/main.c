#include"ft_map.c"
#include<stdio.h>

int do_some(int a)
{
	return (a*2);
}

int main()
{	
	int i;
	int tab[] = {1,2,3,4,5,6,7,8,9,0};
	int *arr;

	i = 0;
	arr = ft_map(tab, 10, do_some);
	while(i < 10)
	{
		printf("%i, ", arr[i]);
		i++;
	}
}
