#include "ft_stock_str.h"
#include <stdio.h>

int main(void)
{
    int size = 3;
    char *av[] = {"123", "45622", "ASDF1111"};
   t_stock_str *res;
    res = ft_strs_to_tab(size, av);
    
    ft_show_tab(res);
    
    /*for(int i = 0; i < size; i++)
    {
        printf("res[%i].size = %i\n", i, res[i].size);
        printf("res[%i].str = %s\n", i, res[i].str);
        printf("res[%i].copy = %s\n", i, res[i].copy);
        printf("\n");
    }
    
    printf("res[%i].str (null pointer) = %s\n", size, res[size].str);*/
       
return (0);
}
