#include <unistd.h>
//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int swp;
	int i, j;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swp = tab[i];
				tab[i] = tab[j];
				tab[j] = swp;
			}
			j++;
		}
		i++;
	}
}
/*int main()
{
	int arr[8] = {8, 6, 7, 5, 3, 4, 2, 1};
	ft_sort_int_tab(arr, 8);
	int i;
	i = 0;
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf ("\n");
	return 0;
}*/
