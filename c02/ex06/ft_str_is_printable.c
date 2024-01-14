#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if((str[i] >= 0 && str[i] <= 31) || (str[i] >= 127))
            return(0);
        i++;
    }
    return(1);
}
int main()
{
    char a[] = "\t\t\t";
    char b[] = "AA23";
    char c[] = "   Addew";
    printf("%d\n", ft_str_is_printable(a));
    printf("%d\n", ft_str_is_printable(b));
    printf("%d\n", ft_str_is_printable(c));
}