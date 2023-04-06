void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = aux;
			}
			i++;
		}
		size--;
	}
}
