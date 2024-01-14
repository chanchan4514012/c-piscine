#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
int main()
{
    char c[] = "123";
    char b[] = "456";
    ft_strcpy(c,b);
    printf("%s\n",c);
}