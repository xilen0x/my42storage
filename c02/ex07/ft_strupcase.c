
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;//str[count] = str[count] - 32
		}
		count++;
	}
	return (str);
}

int	main()
{
	char str[] = "hola mundo C en 42 bcn";
	printf("%s\n", ft_strupcase(str));
}