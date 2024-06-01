#include <unistd.h>
//#include <stdio.h>

int ft_atoi(char *str)
{
	int	res;
	int sign;

	res = 0;
	sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign *= -1;
	}
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return res * sign;
}
/*
int main()
{
	char *src = " ---+--+1234ab567";
	int result = ft_atoi(src);
	printf("%d\n", result);
	return 0;

}
*/
