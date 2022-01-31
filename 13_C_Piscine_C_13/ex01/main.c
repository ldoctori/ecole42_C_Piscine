#include"ft_btree.h"
#include<stdio.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree == NULL)
		return (0);
	tree->right = NULL;
	tree->left = NULL;
	tree->item = item;
	return (tree);
}

void btree_insert_data(t_btree **root, void *item)
{
    if(*root == 0)
        *root = btree_create_node(item);
    else if(*(int*)item < *(int*)((*root)->item))
        btree_insert_data(&(*root)->left, item);
    else
        btree_insert_data(&(*root)->right, item);
}

void btree_print(t_btree *root)
{
    if (root)
    {
    printf("%i\n", *(int*)(root->item));
    if (root->left)
        btree_print(root->left);
    if (root->right)
        btree_print(root->right);
    }
}

void *applyf (void *item)
{
    *(int*)item = (*(int*)item)*2;
    return (item);
}

int main()
{
    int a[] = {1,2,3,4,5};
    t_btree *root = 0;
    int i = 0;
    while (i < 5)
    {
        btree_insert_data(&root, &(a[i]));
        i++;
    }
    
    btree_print(root);
    btree_apply_preffix(root, applyf);
    btree_print(root);
}
