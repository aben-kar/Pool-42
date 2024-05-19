#include <unistd.h>
//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a, b;
	a = 4;
	b = 2;
	int d, m;
	ft_div_mod(a, b , &d, &m);
	printf ("%d\n", d);
	printf ("%d\n", m);
	return 0;
}*/
