#include <unistd.h>
void	ft_print_reverse_alphabet(void);
{
	char c;

	c = 'z';
	while ('z' >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
	return ;
}

int	main();
{
	ft_print_reverse_alphabet();
	return (0);
}
