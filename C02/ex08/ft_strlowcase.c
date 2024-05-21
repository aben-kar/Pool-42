#include <unistd.h>
//#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;
}
/*int main()
{
	char src[] = "POOOL";
	printf("%s", ft_strlowcase(src));
	printf("\n");
	return 0;
}*/
