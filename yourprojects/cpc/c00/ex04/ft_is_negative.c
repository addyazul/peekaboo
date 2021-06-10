#include <unistd.h>
void	ft_is_negative(int n);
{
	if (n < 48) 
	{
		write(1,"N\n", 2);
	}
	else (n >= 48)
	 {
	 	write(1, "P\n", 2);
	 }

	return ;
}

int	main()
{
	ft_is_negative(n);
	return (0);
}
