#include <unistd.h>
//#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			return 0;
		}
		i++;
	}
	return 1;
}
/*int main()
{
	printf ("%d", ft_str_is_alpha("po12 ,^&ooll"));
	printf ("\n");
	return 0;
}*/
