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
int	strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else 
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

int	main(int argc, char **argc)
{
	int	i;

	i = 1;
	while (i < (argc - 1))
	{
		if (strcmp(argv[i],argv[i+1]) < 0)
			special_print(argv[i],'\n');
		else if (strcmp(argv[i],argv[i+1]) > 0)


	}

}
