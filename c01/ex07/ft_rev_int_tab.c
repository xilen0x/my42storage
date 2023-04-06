void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	aux;
	
	counter = 0;
	while (counter < (size / 2))
	{
		aux = tab[counter];
		tab[counter] = tab[(size -1) - counter];
		tab[(size -1) - counter] = aux;
		counter++;
	}
}
