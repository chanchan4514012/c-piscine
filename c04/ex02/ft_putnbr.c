#include <unistd.h>
#include <limits.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long    int num;
    
    num = nb;
    if(num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    if(num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar(num + '0');
}
int main()
{

    ft_putnbr(__INT_MAX__);
    ft_putnbr(INT_MIN);
    ft_putnbr(0);
}