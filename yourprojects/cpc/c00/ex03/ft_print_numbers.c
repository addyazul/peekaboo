#include <unistd.h>
void	ft_print_numbers(void);
{
	char c;

	c = 48
	while (c <= 57)
	{
		write(1, &c, 1);
			c++;
	}
	return ;
}

int	main();
{
	ft_print_numbers();
	return (0);
}
