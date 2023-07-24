/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:19:21 by castorga          #+#    #+#             */
/*   Updated: 2023/07/18 16:20:50 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *string)
{
	int	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}

char	*ft_strdup(const char *string)
{
	int		i;
	int		size;
	char	*duplicate;

	i = 0;
	size = ft_strlen(string);
	duplicate = malloc(sizeof(char) * (size + 1));
	if (!duplicate)
		return (0);
	while (string[i])
	{
		duplicate[i] = string[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

#include "get_next_line.h"

char *ft_strjoin(char *line, char *buffer, int start, int end)
{
    char *new_line;
    int line_len = (line != NULL) ? ft_strlen(line) : 0;
    int buffer_len = end - start;
    int new_len = line_len + buffer_len + 1;
    int i = 0;
    int j = 0;

    new_line = malloc(new_len * sizeof(char));
    if (!new_line)
        return (NULL);

    while (i < line_len)
    {
        new_line[i] = line[i];
        i++;
    }

    while (j < buffer_len)
    {
        new_line[i] = buffer[start + j];
        i++;
        j++;
    }

    new_line[i] = '\0';

    free(line);
    return (new_line);
}
