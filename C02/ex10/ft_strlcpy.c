#include <unistd.h>
//#include <stdio.h>

int ft_strlen(char *src)
{
	int	i;
	i = 0;
	while (src[i])
	{
		i++;
	}
	return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;
	len = ft_strlen(src);
	i = 0;
	while (src[i])
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return len;
}
/*int main()
{
	char sr[] = "Hellow world";
	char des[20];
	printf ("%d\n", ft_strlcpy(des, sr, 6));
	printf ("%s", des);
	printf ("\n");
	return 0;
}*/
