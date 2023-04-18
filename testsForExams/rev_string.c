#include <unistd.h>

char	rev_string(char *str)
{
	int	i;
	i = 0;
	while(str[i] !='\0')
	{
		i++;
	}
	i = i - 1;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}

	return (*str);
}

int	main(void)
{
	rev_string("holamnundo");
	return (0);
}
