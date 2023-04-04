#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a[5];

	a[0] = '0';
	a[1] = '0';
	a[2] = ' ';
	a[3] = '0';
	a[4] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			while (a[3] <= '9')
			{
				while (a[4] <= '9')
				{
					if (!(a[0] == '0' && a[1] == '0' && \
						a[3] == '0' && a[4] == '0'))
						write(1, ", ", 2);
					write(1, a, 2);
					write(1, " ", 1);
					write(1, &a[3], 2);
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
