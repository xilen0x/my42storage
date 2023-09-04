/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------
Reproduce exactly the behavior of the function strcspn
(man strcspn).
The function should be prototyped as follows:
size_t	ft_strcspn(const char *s, const char *reject);

DESCRIPTION
The strcspn() function calculates the length of the initial segment  of
s which consists entirely of bytes not in reject.

RETURN VALUE
The strcspn() function returns the number of bytes in the initial  seg‐
ment of s which are not in the string reject.
*/

/*#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char *s = "Hello World";
	char *reject = "l";

	printf("%zu\n", ft_strcspn(s, reject));
	return (0);
}
*/

#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char *s = "Hello World";
	char *reject = "o";

	printf("%ld\n", ft_strcspn(s, reject));
	return (0);
}