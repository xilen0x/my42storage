#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}	

int	main(void)
{
	int len;

	len = ft_strlen("hola");
	printf("%d", len);
	return (0);
}
