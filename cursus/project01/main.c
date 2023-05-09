/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:42:19 by castorga          #+#    #+#             */
/*   Updated: 2023/05/09 12:42:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

/*
int	main(void)
{
	char	c, d, e;

	c = 'Q';
	d = 'q';
	e = '+';
	printf("\nWhen uppercase alphabet is passed: %d", isalpha(c));
	printf("\nWhen lowercase alphabet is passed: %d", isalpha(d));
	printf("\nWhen non-alphabetic character is passed: %d", isalpha(e));
	printf("\n-------\n");
	printf("\nWhen uppercase alphabet is passed: %d", ft_isalpha(c));
	printf("\nWhen lowercase alphabet is passed: %d", ft_isalpha(d));
	printf("\nWhen non-alphabetic character is passed: %d", ft_isalpha(e));
	return (0);
}
*/

/*
int	main(void)
{
	char	c, d;

	c = '2';
	d = 'a';
	printf("\nWhen digit is passed: %d", isdigit(c));
	printf("\nWhen non-digit is passed: %d", isdigit(d));
	printf("\n-------\n");
	printf("\nWhen digit is passed: %d", ft_isdigit(c));
	printf("\nWhen non-digit is passed: %d", ft_isdigit(d));
	return (0);
}
*/

/*int	main(void)
{
	char	c = 'a';
	char	d = '7';
	char	e = '#';

	printf("\n---------- isalnum ----------\n");
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	printf("%d\n", isalnum(e));
	printf("\n---------- ft_isalnum ----------\n");
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(e));
	return (0);
}*/

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	char	d;

	c = 2;
	d = 128;
	printf("\nWhen assci is passed: %d", isascii(c));
	printf("\nWhen non-assci is passed: %d", isascii(d));
	printf("\n-------\n");
	printf("\nWhen assci is passed: %d", ft_isascii(c));
	printf("\nWhen non-assci is passed: %d\n", ft_isascii(d));
	return (0);
}
*/

int	main(void)
{
	int	c;
	int d;

	c = '2';
	d = 9;
	printf("\n---isprint----");
	printf("\nWhen printable is passed: %d", isprint(c));
	printf("\nWhen non-printable is passed: %d\n", isprint(d));
	printf("\n---ft_isprint----");
	printf("\nWhen printable is passed: %d",   ft_isprint(c));
	printf("\nWhen non-printable is passed: %d\n", ft_isprint(d));
	return (0);
}