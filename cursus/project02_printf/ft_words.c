#include "ft_printf.h"

//--------------Character--------------

void	ft_putcharacter_len(char character, int *len)
{
	write(1, &character, 1);
	(*len)++;
}

//--------------String--------------

void	ft_string(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putcharacter_len(args[i], len);
		i++;
	}
}
