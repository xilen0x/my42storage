/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:47:09 by castorga          #+#    #+#             */
/*   Updated: 2023/04/18 18:03:28 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated
     string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of
     both strings.

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
*/

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int k;

    i = 0;
    k = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + k] == to_find[k] && to_find[k] != '\0')
        {
            k++;
        }
        if (to_find[k] == '\0')
        {
            return (str + i);
        }
        i++;
    }

    return (0);
}

int main(void)
{
    char *result = ft_strstr("holamundo", "m");
    if (result != 0)
    {
        printf("Substring found at position: %ld\n", result - "holamundo");
    }
    else
    {
        printf("Substring not found\n");
    }
    return (0);
}

