#include "ft_ultimate_ft.c"
int main (){
   int *********a, ********b, *******c, ******d, *****e, ****f, ***g, **h, *i;
    int j = 1;
     
    i = &j;
    h = &i;
    g = &h;
    f = &g;
    e = &f;
    d = &e;
    c = &d;
    b = &c;
    a = &b;

	ft_ultimate_ft(a);
}
