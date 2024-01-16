#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	while (*str)
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr && *to_find_ptr && *str_ptr == *to_find_ptr)
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (!*to_find_ptr)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

int main() {
    char str1[] = "Hello, World!";
    char to_find1[] = "World";
    char *result1 = ft_strstr(str1, to_find1);

    char str2[] = "This is a test.";
    char to_find2[] = "is";
    char *result2 = ft_strstr(str2, to_find2);

    char str3[] = "No match here.";
    char to_find3[] = "notfound";
    char *result3 = ft_strstr(str3, to_find3);

    printf("Test 1: %s\n", result1);
    printf("Test 2: %s\n", result2);
    printf("Test 3: %s\n", result3);

    return 0;
}