#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int	main(int ac, char **av)
{
	(void) ac;
	printf("%d",ft_recursive_factorial(atoi(av[1])));
	return (0);
}
