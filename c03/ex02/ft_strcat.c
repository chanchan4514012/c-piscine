#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	count;

	index = 0;
	count = ft_strlen(dest);
	while (src[index])
	{
		dest[count + index] = src[index];
		index++;
	}
	dest[count + index] = '\0';
	return (dest);
}
int main() 
{
    char dest[20] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    ft_strcat(dest, src);
    printf("After concatenation: %s\n", dest);

    return 0;
}