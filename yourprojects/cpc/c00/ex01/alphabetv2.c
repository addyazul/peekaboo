#include <unistd.h> 
void	ft_print_alphabet(void)
{
	char c;
	
	c = 97;
		while (c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
		write(1, "\n", 1);
	return;
}
	
int main()
{	
	ft_print_alphabet();
	return(0);
}	
