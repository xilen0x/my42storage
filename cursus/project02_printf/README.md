# my42storage

# printf | 42 BCN
*Create your own printf*

## Summary
library that contain the function ft_printf(), which mimics the original printf().

## Projects Overview

Program name
libftprintf.a

Makefile 
NAME, all, clean, fclean, re

Authorized functions
malloc, free, write, va_start, va_arg, va_copy, va_end

Prototype:
int ft_printf(char const *, ...);

Requirements:

    • Do not implement the buffer management of the original printf() .
    • You must implement the following conversions: cspdiuxX %
    • Your function will be compared to the original printf() .
    • You have to use the ar command to create your library. The use of libtool command is prohibited.
    • Your libftprintf.a file should be created in the root of your repository.

You have to implement the following conversions:

    • %c Prints a single character.
    • %s Prints a string (as defined by default in C).
    • %p The void * pointer given as an argument is printed in hexadecimal format.
    • %d Prints a decimal number (base 10).
    • %i Prints a base 10 integer.
    • %u Prints an unsigned decimal (base 10) number.
    • %x Prints a hexadecimal number (base 16) in lower case.
    • %X Prints a hexadecimal number (base 16) in upper case.
    • % % to print the percentage symbol.

OUTPUT:
```% gcc ft_printf.c ft_words.c ft_numbers.c
...

Cadena sin modificador     :    HolaMundo //output my solution
Cadena sin modificador     :    HolaMundo //output original printf
Caracter                   :    A
Caracter                   :    A
Cadena                     :    HolaMundo
Cadena                     :    HolaMundo
Entero en base10 (d)       :    42
Entero en base10 (d)       :    42
Entero en base10 (i)       :    42
Entero en base10 (i)       :    42
Simbolo porcentaje         :    %
Simbolo porcentaje         :    %
Entero en base10 sin signo :    4294967254
Entero en base10 sin signo :    4294967254
Hexadecimal(base 16) en min:    deadbeef
Hexadecimal(base 16) en min:    deadbeef
Hexadecimal(base 16) en may:    DEADBEEF
Hexadecimal(base 16) en may:    DEADBEEF
Pointer                    :    0xdeadbeef
Pointer                    :    0xdeadbeef``

castorga 2023
