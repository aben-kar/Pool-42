#include <unistd.h>
//#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int swp;
	int i;
	i = 0;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swp;
		i++;
	}
}
/*int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(arr, 6);
	int i = 0;
	while (i < 6)
	{
		printf ("%d ", arr[i]);
		i++;
	}
	printf ("\n");
	return 0;
}*/
