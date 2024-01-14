#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return(str);
}
int main()
{
    char c[] = "aaaa";
    char b[] = "AaaaA";
    printf(("%s\n"),ft_strupcase(c));
    printf(("%s\n"),ft_strupcase(b));
}

