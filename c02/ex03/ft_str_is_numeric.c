#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_always_digit;

	is_always_digit = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 0 && str[i] <= 9) || (str[i] == '\0')))
		{
			is_always_digit = 0;
			break ;
		}
		i++;
	}
	if (is_always_digit == 1)
		return (1);
	return (0);
}

/*int	main(void)
{
	//char	my_digits[10] = {1,2,3,4,5,6,7,8,9,0};
	//char	my_digits[10] = {1,2,3,4,5,6,'*',8,9,0};
	char	my_digits[10] = {};
	printf("%d", ft_str_is_numeric(my_digits));
	return (0);
}*/
