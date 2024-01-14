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
char *ft_strcat(char *dest, char *src)
{
    int index;
    int count;

    index = 0;
    count = ft_strlen(dest);
    
    while(dest[index] && src[index])
    {
        dest[count + index] = src[index];
        index++;
    }
    dest[count + index] = '\0';
    return(dest);
}
int main()
{
    char c[] = "hello";
    char a[] = "world";
    char f[] = "hax";
    char e[] = "no";
    /*printf("%s\n",ft_strcat(c,a));
    printf("%s\n",ft_strcat(f,a));
    printf("%s\n",ft_strcat(a,f));
    printf("%s\n",ft_strcat(e,a));*/
    printf("%s\n",strcat(c,a));
    printf("%s\n",strcat(f,a));
    printf("%s\n",strcat(a,f));
    printf("%s\n",strcat(e,a));
}