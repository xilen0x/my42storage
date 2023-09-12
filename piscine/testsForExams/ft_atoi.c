/*atoi simple*/

#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("%d\n", ft_atoi(av[1]));
		return (0);
	}
	write (1, "0\n", 2);
	return (1);
}
