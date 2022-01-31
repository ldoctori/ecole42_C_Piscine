#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
char    *ft_strdup(char *src);
int    ft_strlen(char *str);
void ft_show_tab(struct s_stock_str *par);

#endif

