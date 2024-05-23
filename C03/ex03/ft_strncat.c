#include <unistd.h>
//#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	while (*dest != '\0')
	{
		dest++;
	}
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return 0;
}
/*int main()
{
	char des[20] = "hellow ";
	char sr[] = "world !";
	ft_strncat(des, sr, 4);
	printf ("%s\n", des);
	return 0;
}*/
