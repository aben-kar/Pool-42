#include <unistd.h>
//#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return dest;
}
/*int main()
{
	char des[20] = "Hellow";
	char sr[] = " world !";
	ft_strcat(des, sr);
	printf ("%s\n", des);
	return 0;
}*/
