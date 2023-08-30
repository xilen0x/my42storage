/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:
int ft_strcmp(char *s1, char *s2);
DESCRIPTION
       The  strcmp()  function compares the two strings s1 and s2.
strcmp() returns an integer indicating the result of the comparison, as
       follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

*/
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
	return (0);
}

int	main(void)
{
	char s1[] = "Hola amigo";
	char s2[] = "Hola bmigo";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
