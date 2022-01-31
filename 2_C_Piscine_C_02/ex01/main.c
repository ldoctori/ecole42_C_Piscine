#include "ft_strncpy.c"
#include "ft_putstr_non_printable.c"
#include <unistd.h>
int main ()
{
    unsigned int n = 6;
    char src [] = {"Go"};
    char dest [15];
    ft_putstr_non_printable(ft_strncpy(dest, src, n));
	//write (1, ft_strncpy(dest, src, n) , 15);
}
