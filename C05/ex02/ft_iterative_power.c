int ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < power)
	{
		n = nb * n;
		i++;
	}
	return (n);
}
