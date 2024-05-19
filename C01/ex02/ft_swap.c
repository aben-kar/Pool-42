#include <unistd.h>
//#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swp;
	swp = *a;
	*a = *b;
	*b = swp;
}
/*int main()
{
	int x = 10;
	int y = 8;
	ft_swap(&x, &y);
	printf ("%d\n", x);
	printf ("%d\n", y);
	return 0;
}*/
