#include "libft.h"

/*Concatenates two strings ensuring it ends with \0*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	temp;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	temp = len_dst;
	i = 0;
	if (!dst && size == 0)
		return (len_src);
	if (size <= temp)
		return (size + len_src);
	while (src[i] && len_dst + 1 < size)
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = 0;
	return (temp + len_src);
}


int	main(void)
{
	printf("-------strlcat------------\n");
	char		dst[20] = "Hello ";
	const char	src[] = "World!";
	printf("%d\n", strlcat(dst, src, sizeof(dst)));
	
	printf("-------ft_strlcat------------\n");
	char		dst2[20] = "Hello ";
	const char	src2[] = "World!";
	printf("%ld\n", ft_strlcat(dst2, src2, sizeof(dst2)));
	
	return (0);
}
