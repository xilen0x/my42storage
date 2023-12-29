/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------
Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);
*/

/*char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < (len / 2))
	{
		temp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = temp;
		i++;
	}
	return (str);
}
*/


char	*ft_strrev(char *str)
{
	int	len = 0;
	int	i = 0;
	int aux = 0;

	while (str[len])
		len++;
	while (i < (len / 2))
	{
		aux = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = aux;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char string[] = "Hello, world!";
	printf("Antes de ft_strrev: %s\n", string);
	ft_strrev(string);
	printf("Despues de ft_strrev: %s\n", string);
	return (0);
}*/

/*
$ ./a.out 
Antes de ft_strrev: Hello, world!
Despues de ft_strrev: !dlrow ,olleH
*/
