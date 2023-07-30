#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	rev_print(char *str)
{
	int i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(*str);
}

int	main(void)
{
	char	str[] = "holamundo";
	rev_print(str);
	return (0);
}
