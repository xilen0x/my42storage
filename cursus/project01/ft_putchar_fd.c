/*
Nombre de función
ft_putchar_fd

Prototipo
void ft_putchar_fd(char c, int fd);

Parámetros 
c: El carácter a enviar.
fd: El file descriptor sobre el que escribir.

Valor devuelto 
Nada

Funciones autorizadas
write

Descripción 
Envía el carácter ’c’ al file descriptor especificado.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
