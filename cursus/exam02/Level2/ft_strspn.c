/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------
Reproduce exactly the behavior of the strspn function 
(man strspn).
The function should be prototyped as follows:
size_t	ft_strspn(const char *s, const char *accept);

DESCRIPTION
       The  strspn()  function  calculates the length (in bytes) of the initial
       segment of s which consists entirely of bytes in accept.

RETURN VALUE
       The strspn() function returns the number of bytes in the initial segment
       of s which consist only of bytes from accept.

*/

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}


int	main(void)
{
	char string[] = "abcdefghi";
	char accept[] = "abcde";
	printf("Antes de ft_strspn: %s\n", string);
	printf("Despues de ft_strspn: %zu\n", ft_strspn(string, accept));
	return (0);
}
