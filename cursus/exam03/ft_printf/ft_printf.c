#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void	put_string(char *str, int *len)
{
	int	i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
	{
		*len += write (1, &str[i], 1);
		i++;
	}
}

void	put_digit(long long int num, int base, int *len)
{
	if (num < 0)
	{
		num = num * -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		put_digit((num / base), base, len);
	*len += write(1, &"0123456789abcdef"[num % base], 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	pointer;
	int	i = 0;
	int	len = 0;

	va_start(pointer, format);
	while (format[i])
	{
		if ((format[i] == '%') && ((format[i + 1] == 's') || (format[i + 1] == 'd') || (format[i + 1] == 'x')))
		{
			i++;
			if (format[i] == 's')
				put_string(va_arg(pointer, char *), &len);
			else if (format[i] == 'd')
				put_digit((long long int)va_arg(pointer, int), 10, &len);
			else if (format[i] == 'x')
				put_digit((long long int)va_arg(pointer, unsigned int), 16, &len);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	return (va_end(pointer), len);
}


int	main(void)
{
	ft_printf("Cadena                     :    %s\n", "HolaMundo");
	printf("Cadena                     :    %s\n", "HolaMundo");
	ft_printf("Entero en base10 (d)       :    %d\n", 42);
	printf("Entero en base10 (d)       :    %d\n", 42);
	ft_printf("Hexadecimal(base 16) en min:    %x\n", 0xdeadbeef);
	printf("Hexadecimal(base 16) en min:    %x\n", 0xdeadbeef);
	ft_printf("%s\n", "toto");
	ft_printf("Magic %s is %d\n", "number", 42);
	ft_printf("Hexadecimal for %d is %x\n", 42, 42);

	return (0);
}
