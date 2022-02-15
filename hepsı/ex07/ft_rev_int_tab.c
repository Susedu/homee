#include <unistd.h>
#include <stdio.h>

/*void	ft_rev_int_tab(int *tab, int size)
{
	
	int	swap;
	int	mi;
	int	i;

	i = 0;
	mi = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[mi];
		tab[mi] = swap;
		i++;
		mi--;
	
	}
}*/
/*void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int i;

	i = 0;
	while (i < size)
	{
		tab2[i] = *(tab + (size - 1 - i));
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}*/
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
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
	int tab[] = {1, 2, 3, 4};
	int size;
	
	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
