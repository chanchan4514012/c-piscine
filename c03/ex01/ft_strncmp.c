#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main()
{
    char a[] = "hello";
    char b[] = "hel";
    char c[] = "world";
    printf("%d\n",ft_strncmp(a,b,2));
    printf("%d\n",ft_strncmp(a,b,1));
    printf("%d\n",ft_strncmp(a,b,4));
    printf("%d\n",ft_strncmp(a,c,5));
}