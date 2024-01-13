#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 20;
	int b = 50;
	ft_swap(&a, &b);
	printf("a =%d b=%d\n",a,b );
}