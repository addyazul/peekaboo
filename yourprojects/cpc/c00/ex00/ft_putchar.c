#include <unistd.h>
void	ft_putchar(char x);
{
	x =c;	
	write(1, &x, 1);

	return;
}

int	main()
{
	ft_putchar('x');
   	return (0);
}
