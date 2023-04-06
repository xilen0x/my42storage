void	ft_swap(int *number_a, int *number_b)
{
	int	my_swap;

	my_swap = *number_a;
	*number_a = *number_b;
	*number_b = my_swap;
}
