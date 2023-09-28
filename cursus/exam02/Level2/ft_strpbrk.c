/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------
Reproduce exactly the behavior of the function strpbrk
(man strpbrk).
The function should be prototyped as follows:
char	*ft_strpbrk(const char *s1, const char *s2);

DESCRIPTION
       The  strpbrk() function locates the first occurrence in the string s of
       any of the bytes in the string accept.

RETURN VALUE
       The strpbrk() function returns a pointer to the byte in s that  matches
       one of the bytes in accept, or NULL if no such byte is found.

*/

#include <stdio.h>
//#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	*s = "Hello, world!";
	const char	*accept = "d";

	char *result = ft_strpbrk(s, accept);
	if (result)
		printf("La primera coincidencia se encuentra en: %s\n", result);
	else
		printf("No se encontraron coincidencias.\n");
	return (0);
}

/*
./a.out 
La primera coincidencia se encuentra en: d!
*/