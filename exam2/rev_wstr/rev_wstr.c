#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
		i++;

	while (i > 0)
	{
		while (i > 0 && argv[1][i - 1] == ' ')
			i--;

		start = i;
		while (i > 0 && argv[1][i - 1] != ' ')
			i--;

		write(1, argv[1] + i, start - i);
		if (i > 0)
			write(1, " ", 1);
	}

	write(1, "\n", 1);
	return (0);
}