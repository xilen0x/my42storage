/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:
char    *ft_strdup(char *src);

DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).
     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

RETURN VALUE
       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.
*/

#include <stdlib.h>//malloc
#include <string.h>//strdup
#include <stdio.h>//printf

char	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int	main(void)
{
	printf("%s\n", strdup("holanda"));
	printf("%s\n", ft_strdup("holanda"));
	return (0);
}

/*$ cc ft_strdup.c 
$ ./a.out 
holanda
holanda
*/