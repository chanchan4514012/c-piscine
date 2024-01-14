#include <stdio.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
int main()
{
    char a[] = "0123456";
    char b[] = "012";
    printf("%d\n",ft_strlen(a));
    printf("%d\n",ft_strlen(b));
}