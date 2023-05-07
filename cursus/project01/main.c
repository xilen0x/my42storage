#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	c = 'a';
	char	d = '7';
	char	e = '#';

	printf("\n---------- isalnum ----------\n");
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	printf("%d\n", isalnum(e));
	printf("\n---------- ft_isalnum ----------\n");
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(e));
	return (0);
}