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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	count;

	index = 0;
	count = ft_strlen(dest);
	while (src[index] && count < nb)
	{
		dest[count + index] = src[index];
		index++;
	}
	dest[count + index] = '\0';
	return (dest);
}
#include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 10;

    printf("Before strncat: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After strncat: %s\n", dest);

    return 0;
}