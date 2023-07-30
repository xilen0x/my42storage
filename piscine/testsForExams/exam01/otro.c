#include <unistd.h>

/*
** Calcula la longitud de la cadena `str`.
** Devuelve el tamaño de `str`.
*/
size_t	ft_strlen(char *str)
{
	size_t	len; // Usamos size_t para la longitud

	len = 0;
	while (str[len]) // Usamos una sintaxis más clara para el ciclo while
		len++;
	return (len);
}

/*
** Imprime la cadena `str` en orden inverso, seguida de una nueva línea.
*/
void	ft_rev_print(char *str)
{
	size_t	i;

	i = ft_strlen(str);
	while (i-- > 0) // Usamos una sintaxis más clara para el ciclo while
		write(1, &str[i], 1);
	write(1, "\n", 1); // Imprimimos una nueva línea después de la cadena invertida
}

/*
** Función principal.
** Crea una cadena de ejemplo y llama a la función `ft_rev_print`.
*/
int	main(void)
{
	char	str[] = "pasapalabra";

	ft_rev_print(str);
	return (0);
}
