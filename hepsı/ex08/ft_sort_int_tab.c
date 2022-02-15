#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] >= tab[j])
				swap(&tab[i], &tab[j]);
			++j;
		}
		++i;
	}
}

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;
	
	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
