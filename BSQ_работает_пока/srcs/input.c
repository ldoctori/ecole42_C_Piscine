#include "../include/ft.h"
void    ft_std_input(void)
{
    int fd;
    char    c;
    
    fd = open ("./standardin.txt", O_RDWR|O_CREAT|O_TRUNC, 0644);
    while (read(0, &c, 1) != 0)
        write (fd, &c, 1);
    close (fd);
}
