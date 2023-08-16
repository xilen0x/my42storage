/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:54:30 by castorga          #+#    #+#             */
/*   Updated: 2023/08/03 14:54:32 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *line)
{
	size_t	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i] != '\0')
		i++;
	return (i);
}

/* strchr(): Locates a character in a string. This finds the first occurrence
 of the desired character in a string or NULL if the character does not appear
  in the string.
*/
char	*ft_strchr(char *current_line, int c)
{
	int	i;

	i = 0;
	if (!current_line)
		return (0);
	if (c == '\0')
		return ((char *)&current_line[ft_strlen(current_line)]);
	while (current_line[i] != '\0')
	{
		if (current_line[i] == (char) c)
			return ((char *)&current_line[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *line, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!line)
	{
		line = (char *)malloc(sizeof(char));
		if (!line)
			return (0);
		line[0] = '\0';
	}
	if (!line || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(line) + ft_strlen(buff)) + 1));
	if (!str)
		return (0);
	i = -1;
	j = 0;
	if (line)
		while (line[++i] != '\0')
			str[i] = line[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(line) + ft_strlen(buff)] = '\0';
	free(line);
	return (str);
}
