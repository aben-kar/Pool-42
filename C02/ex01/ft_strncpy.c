#include <unistd.h>
//#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
/*int main()
{
	char des[20];
	char srcc [] = "Poool";
	ft_strncpy(des, srcc, 3);
	printf ("%s", des);
	printf ("\n");
	return 0;
}*/
