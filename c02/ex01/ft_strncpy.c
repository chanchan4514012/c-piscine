#include <stdio.h>
#include <assert.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}
int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("base   : %s\n", src);
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
}