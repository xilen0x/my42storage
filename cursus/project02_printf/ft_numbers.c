#include "ft_printf.h"

//--------------Digit / Integer--------------

void	ft_number(int number, int *len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putcharacter_len('-', len);
		ft_number(number * -1, len);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, len);
		ft_putcharacter_len(number % 10 + '0', len);
	}
}

//--------------Pointer--------------

void	ft_pointer(size_t pointer, int *len)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (pointer == 0)
	{
		ft_putcharacter_len('0', len);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putcharacter_len(string[i], len);
	}
}

//--------------Hexadecimal --------------

void	ft_hexadecimal(unsigned int x, int *len, char x_or_x)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (x_or_x == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putcharacter_len('0', len);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putcharacter_len(string[i], len);
}

//--------------unsigned int--------------

void	ft_unsigned_int(unsigned int u, int *len)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, len);
	ft_putcharacter_len(u % 10 + '0', len);
}
