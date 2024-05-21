#include <unistd.h>
//#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int	i;
	int	start;
	start = 1;
	i = 0;
	while (str[i])
	{
		if (start && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (!start && (str[i] >= 'A' && str[i] <= 'Z'))
		{	
			str[i] += 32;
		}
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && (str[i] <= 'z') || str[i] >= '0' && str[i] <= '9')))
		{
			start = 1;
		}
		else
		{
			start = 0;
		}
		i++;	

	}
	return str;
}
/*int main()
{
	char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(src));
	printf("\n");
	return 0;
}*/
