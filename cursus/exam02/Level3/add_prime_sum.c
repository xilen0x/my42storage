/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	char buffer[12]; // Suficientemente grande para almacenar cualquier número entero
	int size = 0;
	while (nb > 0)
	{
		buffer[size++] = nb % 10 + '0';
		nb /= 10;
	}
	while (size > 0)
	{
		size--;
		write(1, &buffer[size], 1);
	}
}

int	ft_add_prime_sum(int nb)
{
	int prime_sum = 0;
	int i = 2;

	while (i <= nb)
	{
		if (ft_is_prime(i))
			prime_sum += i;
		i++;
	}
	return (prime_sum);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "0\n", 2);
		exit(0);
	}
	int nb = ft_atoi(av[1]);
	int prime_sum = ft_add_prime_sum(nb);
	ft_putnbr(prime_sum);
	write(1, "\n", 1);
	return (0);
}
