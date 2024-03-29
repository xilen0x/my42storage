#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/*Locates a character in a string(the first occurrence).*/
char	*ft_strchr(char *str, int c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*Copies && concatenate strings from a source to a destination.
  Return: len of src*/
int ft_strlcpy(char *dst, char *src, int size)
{
	int	len;
	int	i = 0;

	len = ft_strlen(src);
	if (size > 0)
	{
		while (i < len && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;

	len = ft_strlen(src) + 1;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_strlcpy(dst, src, len);
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2, int len)
{
	int		len_s1;
	int		len_s2;
	char	*join;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = len;
	join = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!join)
		return (0);
	ft_strlcpy(join, s1, len_s1 + 1);
	ft_strlcpy((join + len_s1), s2, len_s2 + 1);
	free(s1);

	return (join);
}

char *get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	char		*newline;
	int			countread;
	int			to_copy;

	line = ft_strdup(buf);
	while (!(ft_strchr(line, '\n')) && (countread = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[countread] = '\0';
		line = ft_strjoin(line, buf, countread);
	}
	if (ft_strlen(line) == 0)
		return (free(line), NULL);

	newline = ft_strchr(line, '\n');
	if (newline != NULL)
	{
		to_copy = newline - line + 1;
		ft_strlcpy(buf, newline + 1, BUFFER_SIZE + 1);
	}
	else
	{
		to_copy = ft_strlen(line);
		ft_strlcpy(buf, "", BUFFER_SIZE + 1);
	}
	line[to_copy] = '\0';
	return (line);
}

int	main(void)
{
	int		fd;
	char	*line_result;

	fd = open("texto.txt", O_RDONLY);
	while ((line_result = get_next_line(fd)) != NULL)
	{
		printf("%s", line_result);
		free(line_result);
	}
	close(fd);
	return (0);
}
