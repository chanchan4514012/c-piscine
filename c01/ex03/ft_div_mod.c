#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}
int main()
{
    int a = 20;
    int b = 2;
    int quotient;
    int remainer;
    ft_div_mod(a,b,&quotient,&remainer);
    printf("value quotient : %d\n",quotient);
    printf("value remainer : %d\n",remainer);
}