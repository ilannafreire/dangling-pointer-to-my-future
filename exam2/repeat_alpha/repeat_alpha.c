#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	n;

	if (argc != 2)
		return (write(1, "\n", 1));
	i = 0;
	while (argv[1][i])
	{
		n = 1;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			n = argv[1][i] - 'a' + 1;
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			n = argv[1][i] - 'A' + 1;
		j = 0;
		while (j < n)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}