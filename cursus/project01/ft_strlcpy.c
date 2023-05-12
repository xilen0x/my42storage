#include "libft.h"

/*Copies n - 1 bytes from a source string to a destination string*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	j;

	count = 0;
	j = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
		return (count);
	while (j < size - 1 && j < count)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (count);
}

/*
int	main(void)
{
	const char	*src = "welcome";
	char		dst[8];
	printf("-------strlcpy------------\n");
	printf("%d\n", strlcpy(dst, src, sizeof(dst)));

	/*const char	*src2 = "welcome";
	char		dst2[8];
	printf("-------ft_strlcpy------------\n");
	printf("%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
} */

/*
-------strlcpy------------
7
-------ft_strlcpy------------
7
*/