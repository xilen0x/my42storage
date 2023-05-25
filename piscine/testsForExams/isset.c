/* Función ft_isset para verificar si un carácter está presente en un conjunto de caracteres.*/

int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
