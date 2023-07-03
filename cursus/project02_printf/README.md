# my42storage

# printf | 42 BCN
*Crea tu propio printf*

## Summary


## Projects Overview

| Projects | Description |
| :------: | :---------: |
| ``Printf`` | Nombre de programa
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
• % % para imprimir el símbolo del porcentaje. |



castorga 2023
