/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the
string.
Your function must be declared as follows:
int	ft_atoi_base(const char *str, int str_base);*/

int	check(char c)
{
	if (c >= '0' && c <= '9') return 1;
	if (c >= 'A' && c <= 'F') return 1;
	if (c >= 'a' && c <= 'f') return 1;
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && check(str[i]) == 1)
	{
		res = res * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 87;
		i++;
	}
	return (res * sign);
}

/*#include<stdio.h>

int	main(void)
{
    // Ejemplos de strings en base 16
    const char *hex_str1 = "1A"; // 1A en base 16 es 26 en decimal
    const char *hex_str2 = "FF"; // FF en base 16 es 255 en decimal
    const char *hex_str3 = "-3E"; // -3E en base 16 es -62 en decimal

    // Pruebas
    int resultado1 = ft_atoi_base(hex_str1, 16);
    int resultado2 = ft_atoi_base(hex_str2, 16);
    int resultado3 = ft_atoi_base(hex_str3, 16);

    // resultados
    printf("Resultado 1: %d\n", resultado1);
    printf("Resultado 2: %d\n", resultado2);
    printf("Resultado 3: %d\n", resultado3);

    return 0;
}*/

