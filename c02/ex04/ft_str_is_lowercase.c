
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'a' && str[count] <= 'z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

int	main()
{
	printf("%d", ft_str_is_lowercase("holamundocencuarentaydos"));
    printf("\n%d", ft_str_is_lowercase("holAMundo C en 42 Barcelona"));
    printf("\n%d", ft_str_is_lowercase("hola * mundo + C 42 CAstorga"));
    printf("\n%d\n", ft_str_is_lowercase("132456789"));
}