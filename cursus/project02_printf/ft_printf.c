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
• Tienes que usar el comando ar para crear tu librería. El uso de libtool 
command is forbidden.
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

//#include "../project01_libft/libft.h"
#include "ft_printf.h"

static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putcharacter_length(va_arg(*args, int), len);
	else if (s == '%')
		ft_putcharacter_length('%', len);
	else
		(*i)--;
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_checker(str[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putcharacter_length((char)str[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}

/*
int	main(void)
{
	ft_printf("                           :    HolaMundo\n");
	ft_printf("Cadena                     :    %s\n", "Mundo");
	ft_printf("Digito                     :    %d\n", 8);
	ft_printf("Caracter                   :    %c\n", 'A');
	ft_printf("Pointer                    :    %p\n", (void *)0xDEADBEEF);
	ft_printf("Entero en base10           :    %i\n", 42);
	ft_printf("Decimal en base10 sin signo:    %u\n", -42,9);
	ft_printf("Hexadecimal(base 16) en min:    %x\n", 255);
	ft_printf("Hexadecimal(base 16) en may:    %X\n", 255);
	ft_printf("Simbolo porcentaje         :    %%\n");
	return (0);
}
*/