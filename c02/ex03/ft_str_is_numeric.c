#include <stdio.h>

int ft_str_is_numeric (char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if((str[i] < '0' || str[i] > '9'))
            return(0);
        i++;
    }
    return(1);
}
int main()
{
    char a[] = "1234";
    char b[] = "aa23";
    char c[] = "    ddew";
    printf("%d\n", ft_str_is_numeric(a));
    printf("%d\n", ft_str_is_numeric(b));
    printf("%d\n", ft_str_is_numeric(c));
}