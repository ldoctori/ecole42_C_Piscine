#include"ft_btree.h"
#include<stdio.h>

int main()
{
	t_btree *tree;
	int a = 123456;
		tree = btree_create_node(&a);
    printf("%d\n",*((int*)(tree->item)));
	printf("%d", (int)tree->next);
    printf("%d", (int)tree->prev);

}
