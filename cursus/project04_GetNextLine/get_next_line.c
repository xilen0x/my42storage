#include "get_next_line.h"

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

/*La función read_and_append_line lee el contenido del archivo asociado al 
descriptor de archivo (fd) y almacena la línea en el puntero line. 
La función utiliza un buffer para leer el archivo en bloques definidos por
 BUFFER_SIZE y luego concatena el contenido del buffer a la línea hasta 
 encontrar un salto de línea o hasta que se llegue al final del archivo.*/
char	*ft_read_and_append_line(int fd, char *line)
{
	char	*buffer;
	ssize_t	read_bytes;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(line, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(line);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

/*La función ft_extract_next_line crea una nueva cadena que contiene todo el 
contenido de la línea después del primer salto de línea encontrado en la cadena
original. Es decir, elimina la primera línea de la cadena original y devuelve
el resto.*/
char	*ft_extract_next_line(char *line)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

/*La función ft_get_line_from_fd extrae la primera línea de la cadena pasada 
como argumento y la devuelve en una nueva cadena.*/
char	*ft_get_line_from_fd(char *line)
{
	int		i;
	char	*str;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	str = (char *)malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
La función get_next_line es la función principal que se utilizará para obtener 
la siguiente línea del archivo. Llama a read_and_append_line para leer el 
contenido del archivo y almacenarlo en line, luego llama a get_line_from_fd 
para extraer la primera línea y finalmente llama a extract_next_line para 
eliminar la línea extraída de line.*/
char	*get_next_line(int fd)
{
	static char	*line;
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_read_and_append_line(fd, line);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	next_line = ft_get_line_from_fd(line);
	line = ft_extract_next_line(line);
	return (next_line);
}



/* --------------------- Main function --------------------- */

/*#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line_result;

	fd = open("example.txt", O_RDONLY);

	while ((line_result = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line_result);
		free(line_result);
	}
	close(fd);
	return (0);
}
*/