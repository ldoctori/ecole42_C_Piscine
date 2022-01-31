#include"ft_sort_string_tab.c"

int main()
{
	char *tab[] = {"ASD", "2345", "ADS", 0};
	ft_sort_string_tab(tab);

	int i = 0;
	while (i < 3)
	{
		write(1, tab[i], 4);
		write(1, ", ", 2);
		i++;
	}
}
