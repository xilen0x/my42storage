/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:54:53 by castorga          #+#    #+#             */
/*   Updated: 2023/07/17 09:54:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función
get_next_line

Prototipo 
char *get_next_line(int fd);

Archivos a entregar
get_next_line.c, get_next_line_utils.c, get_next_line.h

Parámetros fd: 
File descriptor del que leer

Valor devuelto 
Si todo va bien: la línea leída
En caso de fallo o si la lectura termina: NULL

Funciones autorizadas
read, malloc, free

Descripción
Escribe una función que devuelva la línea leída de un file descriptor
• Llamar a tu función get_next_line de manera repetida (por ejemplo, usando un
bucle) te permitirá leer el contenido del archivo hacia el que apunta el file 
descriptor, línea a línea, hasta el final.
• Tu función deberá devolver la línea que se acaba de leer.
Si no hay nada más que leer o si ha ocurrido un error, deberá devolver NULL.
• Asegúrate de que tu función se comporta adecuadamente cuando lea de un 
archivo y cuando lea de stdin.
• Ten en cuenta que la línea devuelta debe terminar con el caracter n, 
excepto si se ha llegado al final del archivo y esté no termina con un 
caracter n.
• En el header get_next_line.h deberás tener como mínimo el prototipo de la 
función get_next_line.
• Añade todas las funciones de ayuda que necesites en el archivo 
get_next_line_utils.c
*/

#include "get_next_line.h"	

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int		b;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc(sizeof(char) * (BUFFER_SIZE + 1)); // Almacenar línea dinámicamente
	if (!line)
		return (NULL);
	i = 0;
	while ((b = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		int j = 0;
		while (j < b)
		{
			line[i++] = buffer[j];
			if (buffer[j] == '\n')
			{
				line[i] = '\0';
				return (line);
			}
			j++;
		}
	}

	free(line); // Liberar memoria en caso de error o EOF
	return (NULL);
}

#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("example.txt", O_RDONLY);
	if (fd < 0)
	{
		// Manejo      de error al abrir el archivo
		return (1);
	}

	line = get_next_line(fd);
	while (line != NULL)
	{
		// Procesar o imprimir la línea leída
		printf("%s\n", line);

		free(line); // Liberar memoria después de su uso

		line = get_next_line(fd);
	}

	close(fd); // Cerrar el archivo al finalizar

	return (0);
}