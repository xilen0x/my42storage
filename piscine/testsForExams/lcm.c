unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int    i;

	i = 1;
	while (i <= a * b)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (i);
}