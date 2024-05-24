#include <unistd.h>
//#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return str;
	}
	int i;
	int j;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return &str[i];
			}
			j++;
		}
		i++;
	}
	return NULL;
}
/*int main()
{
	char src[] = "Pool is loading";
	char searsh[] = "is";
	char *result = ft_strstr(src, searsh);
	printf ("%s\n", result);
	return 0;
}*/
