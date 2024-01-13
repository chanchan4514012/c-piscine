#include <stdio.h>
/*void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}*/
void	ft_ult_ft(int ***nbr)
{
	***nbr = 20;
}
int	main()
{
	int	***ptr2;
	int **ptr1;
	int *ptr;
	int nbr;
	nbr = 42;

	ptr = &nbr;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ft_ult_ft(ptr2);
	printf("%d\n", nbr);
}