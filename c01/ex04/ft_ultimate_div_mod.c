#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp_a;
    int tmp_b;

    if(b != 0)
    {
        tmp_a = *a / *b;
        tmp_b = *a % *b;
    }
    *a = tmp_a;
    *b = tmp_b;
}
int main()
{
    int a = 30;
    int b = 15;
    ft_ultimate_div_mod(&a,&b);
    printf("the quotient : %d\n",a);
    printf("the remainer : %d\n",b);
}