#include <unistd.h>

void	ft_putchar(char print);

void	ft_putchar(char print)
{
	write(1, &print, 1);
	return ;
}
