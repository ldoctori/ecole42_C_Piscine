#include"ft_list.h"
#include<stdio.h>

int main()
{
	t_list *list;
	int a = 123456;
		list = ft_create_elem(&a);
		printf("%d\n",*((int*)(list->data)));
	printf("%d", (int)list->next);

}
