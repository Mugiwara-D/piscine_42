#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int	main(int ac, char **av)
{
	(void) ac;
	printf("%d",ft_fibonacci(atoi(av[1])));
	return (0);
}
