#include"ft_list.h"
#include<stdio.h>
#include"ft_list_push_front.c"
int main()
{
	t_list **list;
	t_list *t;
	int a = 1234;
	int b = 5678;
	int c = 1000;
	t = ft_create_elem(&a);	

	t->next = ft_create_elem(&b);
	
	list = &t;

		ft_list_push_front(list, &c);
		printf("%d\n",*((int*)(list[0]->data)));
	printf("%d\n", *((int*)(list[0]->next)));
	printf("%i", ft_list_size(*list));
}
