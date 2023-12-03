/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/

/*int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);

}

#include <stdio.h>

int	main(void)
{
	char str[] = "   551";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	i++;
	return (res * sign);
}

int	main(void)
{
	char	str[] = "250";
	printf("%d\n", ft_atoi(str));
	return (0);
}
/*
long	ft_atoi(const char *str)
{
	short int	parity;
	long		number;
	char		*mystr;

	parity = 0;
	number = 0;
	mystr = ft_isspace((char *)str);
	if (*mystr == '+' || *mystr == '-')
	{
		if (*mystr == '-')
			parity++;
		mystr++;
	}
	while (*mystr >= '0' && *mystr <= '9')
	{
		number *= 10;
		number += *mystr - '0';
		mystr++;
	}
	if (parity % 2 == 0)
		return (number);
	return (-number);
}
*/