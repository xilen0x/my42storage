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

#include "ft_printf.h"

static void	ft_printf_options(char op, va_list *args, int *len, int *i)
{
	if (op == 's')
		ft_string(va_arg(*args, char *), len);
	else if (op == 'd' || op == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (op == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (op == 'x' || op == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, op);
	/*else if (op == 'p')
		ft_pointer(va_arg(*args, size_t), len);*/
	else if (op == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (op == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;//pra almacenar argumentos variables

	i = 0;
	len = 0;
	if (str == NULL)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_options(str[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len(str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	ft_printf("Cadena sin modificador     :    HolaMundo\n");
	printf("Cadena sin modificador     :    HolaMundo\n");
	
	ft_printf("Caracter                   :    %c\n", 'A');
	printf("Caracter                   :    %c\n", 'A');
	
	ft_printf("Cadena                     :    %s\n", "HolaMundo");
	printf("Cadena                     :    %s\n", "HolaMundo");
	
	ft_printf("Entero en base10 (d)     :    %d\n", 42);
	printf("Entero en base10 (d)     :    %d\n", 42);
	
	ft_printf("Entero en base10 (i)     :    %i\n", 052);//imprime 42
	printf("Entero en base10 (i)     :    %i\n", 052);
	
	ft_printf("Simbolo porcentaje       :    %%\n");
	printf("Simbolo porcentaje       :    %%\n");
	
	ft_printf("Entero en base10 sin signo:    %u\n", -42);
	printf("Entero en base10 sin signo:    %u\n", -42);
		
	ft_printf("Hexadecimal(base 16) en min:    %x\n", 0xdeadbeef);
	printf("Hexadecimal(base 16) en min:    %x\n", 0xdeadbeef);

	ft_printf("Hexadecimal(base 16) en may:    %X\n", 0xDEADBEEF);
	printf("Hexadecimal(base 16) en may:    %X\n", 0xDEADBEEF);
	/*
	ft_printf("Pointer                    :    %p\n", (void *)0xDEADBEEF);
	*/
	return (0);
}
