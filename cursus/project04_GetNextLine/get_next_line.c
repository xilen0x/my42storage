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

/*char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE + 1];
    static int bytes_read = 0;
    static int current_pos = 0;
    char *line;
    int i = 0;
    //int j;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    line = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!line)
        return (NULL);

    while (1)
    {
        if (current_pos == bytes_read)
        {
            bytes_read = read(fd, buffer, BUFFER_SIZE);
            current_pos = 0;
            if (bytes_read <= 0)
            {
                line[i] = '\0';
                if (i == 0)
                {
                    free(line);
                    line = NULL;
                }
                return (line);
            }
        }

        if (buffer[current_pos] == '\n')
        {
            line[i] = '\0';
            current_pos++;
            return (line);
        }

        line[i] = buffer[current_pos];
        i++;
        current_pos++;
    }

    // This point should not be reached
    return (NULL);
}*/

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	static int	bytes_read = 0;
	static int	current_pos = 0;
	char		*line;
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	while (1)
	{
		if (current_pos == bytes_read)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			current_pos = 0;
			if (bytes_read <= 0)
			{
				line[i] = '\0';
				if (i == 0)
				{
					free(line);
					line = NULL;
				}
				bytes_read = 0;
				current_pos = 0;
				return (line);
			}
		}
		if (buffer[current_pos] == '\n')
		{
			line[i] = '\0';
			current_pos++;
			return (line);
		}
		line[i] = buffer[current_pos];
		i++;
		current_pos++;
	}
	return (NULL);
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("example.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
*/