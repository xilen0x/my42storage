/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:22:25 by castorga          #+#    #+#             */
/*   Updated: 2023/06/19 10:22:28 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de programa
libftprintf.a

Makefile 
NAME, all, clean, fclean, re

Funciones autorizadas
malloc, free, write, va_start, va_arg, va_copy, va_end

Se permite usar libft
Yes

Descripción 
Escribe una librería que contenga la función ft_printf(), que imite el 
printf() original. 

Debes reprogramar la función printf() de la libc.

Prototipo:
int ft_printf(char const *, ...);

Requisitos:
• No implementes la gestión del buffer del printf() original.
• Deberás implementar las siguientes conversiones: cspdiuxX %
• Tu función se comparará con el printf() original.
• Tienes que usar el comando ar para crear tu librería. El uso de libtool command
is forbidden.
• Tu archivo libftprintf.a deberá ser creado en la raiz de tu repositorio.

Tienes que implementar las siguientes conversiones:
• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• % % para imprimir el símbolo del porcentaje.
*/

#include <stdarg.h>

int	ft_printf(char const *, ...)
{
	va_list ap, ap2;
	int		d;
    char 	c, *s;

	va_start(ap, fmt);
	va_copy(ap2, ap);
	while (*fmt)
		switch(*fmt++)
		{
			case 's':                       /* string */
				s = va_arg(ap, char *);
				printf("string %s\n", s);
				break;
			case 'd':                       /* int */
				d = va_arg(ap, int);
				printf("int %d\n", d);
				break;
			case 'c':                       /* char */
				/* Note: char is promoted to int. */
				c = va_arg(ap, int);
				printf("char %c\n", c);
				break;
		}
	va_end(ap);
	...
	/* use ap2 to iterate over the arguments again */
    ...
	va_end(ap2);
}

int main(void)
{
	ft_printf("holamundo");
	return (0);
}
