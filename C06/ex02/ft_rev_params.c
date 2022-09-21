#include <unistd.h>
void	special_print(char *str, char c)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		argc--;
		special_print(argv[argc], '\n');
	}
	return (0);
}
