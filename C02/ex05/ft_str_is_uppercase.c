#include <unistd.h>
//#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}
/*int main()
{
	printf ("%d", ft_str_is_lowercase("ALS ,KJJFF"));
	printf ("\n");
	return 0;
}*/
