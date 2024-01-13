#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int index;
    int tmp;

    index = 0;
    while(index < size / 2)
    {
        tmp = tab[index];
        tab[index] = tab[size - 1 - index];
        tab[size - 1 - index] = tmp;
        index++;
    }
}
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int test_array[] = {1, 2, 3, 4, 5};


    printf("Original array: ");
    print_array(test_array, 5);

 
    ft_rev_int_tab(test_array, 5);


    printf("Reversed array: ");
    print_array(test_array, 5);

    return 0;
}