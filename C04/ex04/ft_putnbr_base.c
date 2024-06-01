#include <unistd.h>
//#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int check_base(char *base)
{
	int i;
	i = 0;

	while (base[i])
	{
		i++;
	}
	if (i < 2)
	{
		return 1;
	}

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 || (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
		{
			return 1;
		}
		i++;
	}

	int j;	
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base [j])
		{
			if (base[i] == base[j])
			{
				return 1;
			}
			j++;
		}
		i++;
	}
	return 0;
}

void ft_putnbr_base(int nbr, char *base)
{
	int size;
	if (check_base(base) == 1)
	{
		return;
	}

	size = 0;
	while (base[size])
	{
		size++;
	}

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}

	if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
		ft_putnbr_base(nbr % size, base);
	}

	if (nbr < size)
	{
		ft_putchar(base[nbr]);
	}
}
/*int main()
{
	 ft_putnbr_base(-11, "01");
	 printf("\n");
	 ft_putnbr_base(50, "poneyvif");
	 printf("\n");
	 ft_putnbr_base(  894867, "0123456789");
	 printf("\n");
	 ft_putnbr_base(-33, "0123456789abcdef");
}*/
