#include"ft.h"
t_list	*ft_create_elem(unsigned int nb, unsigned int order)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (t == NULL)
		return (0);
	t->next = NULL;
	t->nb = nb;
	t->order = order;
	return (t);
}

t_list	*ft_list_push_center(unsigned int nb, t_list *next, unsigned int order)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (t == NULL)
		return (0);
	t->next = next;
	t->nb = nb;
	t->order = order;	
	return (t);
}

/*void	ft_remove_elem(t_list *begin_list)
{	
	t_list	*last;
	t_list	*current;
	int		count;
	t_list	*for_rec;
	
	for_rec = begin_list;
	count = 0;	
	last = ((void *)0);
	current = begin_list;
	while (current)
	{
		if (current->nb == 0)
		{
			if (current == begin_list)
				begin_list = current->next;
			else
				last->next = current->next;
			last = current;
			current = current->next;
			free(last);
			count++;
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
	if (count > 0)
		ft_remove_elem(for_rec);
	
}*/

void	ft_remove_elem(t_list *begin_list)
{	
	t_list *t;

	while (begin_list)
	{
		t = begin_list->next;
		if(begin_list->nb == 0)
		{
		//	free(begin_list);
			begin_list = t;
		}/*
		if (t->nb == 0)
		{
			begin_list = t->next;
			free(t);
		}*/
		begin_list= begin_list->next;		
	}	
}

void ft_list_push_center_if(t_list *begin_list)
{	
	t_list *t;

	t = begin_list->next;
	while(begin_list->next)
	{	
		if(begin_list->order != t->order)
		{
			begin_list->next = ft_list_push_center(begin_list->order, t, begin_list->order);
			begin_list = t;
		}
		else
			begin_list = begin_list->next;
		t = begin_list->next;
	}
}

void	ft_list_push_back(t_list *begin_list, unsigned int nb, unsigned int order)
{
	t_list	*t;

	if (begin_list)
	{	
		t = begin_list;
		while (t->next)
			t = t->next;
		t->next = ft_create_elem(nb, order);
	}
	else
		begin_list = ft_create_elem(nb, order);
}
