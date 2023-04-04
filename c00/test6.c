#include <unistd.h>

void	ft_write2(char b[4])
{
	if (!(b[0] == '0' && b[1] == '0' && b[3] == '0' && \
		b[4] == '0'))
		write(1, ", ", 2);
	else
	{
		if (b[0] > b[3] && b[1] > b[4])
		{

			write(1, b, 2);
			write(1, " ", 1);
			write(1, &b[3], 2);
		}
	}
}

void	ft_write(char a[4])
{
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			while (a[3] <= '9')
			{
				while (a[4] <= '9')
				{
					ft_write2(a);
					a[4]++;
				}
				a[4] = '0';
				a[3]++;
			}
			a[3] = '0';
			a[1]++;
		}
		a[1] = '0';
		a[0]++;
	}
}
 
void	ft_print_comb2(void)
{
	char	a[5];

	a[0] = '0';
	a[1] = '0';
	a[3] = '0';
	a[4] = '0';
	ft_write(a);
}
