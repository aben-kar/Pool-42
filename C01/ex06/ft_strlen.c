#include <unistd.h>
//#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}
/*int main()
{
	printf ("%d\n", ft_strlen("check"));
	return 0;
}*/