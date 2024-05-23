#include <unistd.h>
//#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	i = 0;
	while (i < n && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return *s1 - *s2;	
		}
		s1++;
		s2++;
	}
	if (i < n)
	{
		return *s1 - *s2;
	}
	return 0;
}
/*int main()
{
	printf ("%d\n", ft_strncmp("hellower", "hellowre", 7));
	return 0;
}*/
