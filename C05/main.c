#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int	main(int ac, char **av)
{
	(void) ac;
	printf("%d",ft_iterative_power(atoi(av[1]),atoi(av[2])));
	return (0);
}
