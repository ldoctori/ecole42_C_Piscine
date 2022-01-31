#include"list.c"
#include"ft.h"

int main()
{
    unsigned int nb = 420000000;
    t_list *begin_list;
    
    begin_list = ft_create_elem(nb/1000000000, 1000000000);
    nb = nb % 1000000000;
    ft_list_push_back(begin_list, nb/1000000, 1000000);
    nb = nb % 1000000;
    ft_list_push_back(begin_list, nb/1000, 1000);
    ft_list_push_back(begin_list, nb % 1000, 1);
    
     
   
    t_list *ptr = begin_list;
   
      while(ptr)
      {
         //if(ptr->nb != 0)
         printf("%i, ", ptr->nb);
          ptr = ptr->next;
      }
     ptr = begin_list;
    printf("\n");
    while(begin_list)
    {
        if (begin_list->nb / 100 >= 1)
        {
            begin_list->next = ft_list_push_center((begin_list->nb % 100 - begin_list->nb % 10), begin_list->next, begin_list->order);
            begin_list->next->next = ft_list_push_center((begin_list->nb % 10), begin_list->next->next, begin_list->order);
            begin_list->nb = (begin_list->nb /100) * 100;
        }
        begin_list = begin_list->next;
    }
    begin_list = ptr;
    
    while(ptr)
    {
       
       printf("%i, ", ptr->nb);
       // printf("%i, ", ptr->order);
        ptr = ptr->next;
    }
    
  //ft_list_push_center_if(begin_list);
    ft_remove_elem(begin_list);
      ptr = begin_list;
    while(ptr)
    {
       
       printf("%i, ", ptr->nb);
       // printf("%i, ", ptr->order);
        ptr = ptr->next;
    }
    
}
