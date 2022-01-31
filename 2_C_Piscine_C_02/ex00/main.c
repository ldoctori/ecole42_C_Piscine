#include "ft_strcpy.c"
#include <unistd.h>
int main ()
{
    char src [] = {"Good morning!"};
    char dest [15];
    

    
	write (1, ft_strcpy(dest, src) , 15);
	return 0;
}
