
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str [count] <= 126))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

int	main()
{
	printf("Imprimibles: %d\n", ft_str_is_printable("ABcdfghiDEjklmnoLKFSprrstyvxzCO?I340990%/*+-"));
	printf("No Imprimibles: %d\n", ft_str_is_printable("\n\t\v\f"));
}