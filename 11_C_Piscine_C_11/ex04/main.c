#include"ft_is_sort.c"
#include<stdio.h>
int sort(int a, int b)
{
	return a - b;
}
int main()
{
	int arr[10] = {8,7,6,5,4,3,2,1};
	
	printf("%i", ft_is_sort(arr, 8, sort));
}
