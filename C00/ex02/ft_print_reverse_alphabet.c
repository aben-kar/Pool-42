#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char	r;
	int	i;

	r = 'z';
	i = r;
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}
/*int main()
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return 0;
}*/
