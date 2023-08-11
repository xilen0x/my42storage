#include <unistd.h>

int	main(void)
{
	char	*str;
	char	upper;
	int		i;

	str = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			write (1, &str[i], 1);
		}
		else
		{
			upper = str[i] - 32;
			write (1, &upper, 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
