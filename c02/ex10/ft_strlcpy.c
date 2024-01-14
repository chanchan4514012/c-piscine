#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int index;
    unsigned int count;

    count = 0;
    while(src[count])
    {
        count++;
    }
    if(size != 0)
    {
        while(src[index] && index < (size - 1))
        {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }
   return(count);
}

int				main(void)
{
	char	*string1;
	char	string2[2];

	string1 = "0";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);
}