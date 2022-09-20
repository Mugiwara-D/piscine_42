int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	n = 1;
	i = 1;
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
