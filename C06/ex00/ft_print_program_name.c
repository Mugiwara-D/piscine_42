#include <unistd.h>

void	ft_puts(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
int	main(int argc, char **argv)
{
	(void) argc;
	ft_puts(argv[0]);
	return (0);
}
