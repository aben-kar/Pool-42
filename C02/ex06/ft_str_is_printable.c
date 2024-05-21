#include <unistd.h>
//#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return 0;
		}
		i++;
	}
	return 1;
}
/*int main()
{
	printf ("%d", ft_str_is_printable("dkshdfkh ,13	2014"));
	printf ("\n");
	return 0;
}*/
