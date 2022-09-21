#include <unistd.h>

void	ft_putstrn(char *str)
{
	char	c;

	c = '\n';
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &c, 1);
}

int	main(int argc,char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstrn(argv[i]);
		i++;
	}
	return (0);
}
