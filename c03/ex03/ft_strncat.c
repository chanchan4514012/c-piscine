#include <string.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(*(str + i))
        i++;
    return(i);
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int index;
    int count;

    index = 0;
    count = ft_strlen(dest);
    
    while(dest[index] && src[index] && count < nb)
    {
        dest[count + index] = src[index];
        index++;
    }
    dest[count + index] = '\0';
    return(dest);
}
int main()
{

    char a[] = "hello";
    char b[] = "world";
    char c[] = "013456789";
    char e[] = "012";
    printf("%s\n", ft_strncat(a,b,1));
    printf("%s\n", strncat(a,b,2));
    printf("%s\n", ft_strncat(a,b,3));
    printf("%s\n", strncat(a,b,4));
    printf("%s\n", ft_strncat(a,b,5));
    printf("%s\n", strncat(a,b,6));
}