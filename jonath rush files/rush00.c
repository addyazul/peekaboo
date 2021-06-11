#include <unistd.h>

void	rush(int x, int y);
void	print_circle_line(int row_length);
void	print_pipe_line(int row_length);
void	ft_putchar(char print);

void	rush(int x, int y)	
{
	int	current_width;

	if (x <= 0 || y <= 0)
		return ;
	if (y == 1)
		print_circle_line(x);
	else if (y == 2)
	{
		print_circle_line(x);
		print_circle_line(x);
	}
	else
	{
		print_circle_line(x);
		current_width = 2;
		while (current_width < y)
		{
			print_pipe_line(x);
			current_width++;
		}
		print_circle_line(x);
	}
	return ;
}

void	print_circle_line(int row_length)				
{
	int	current_length;	

	ft_putchar('o');
	if (row_length == 1)
	{
		ft_putchar('\n');
		return ;
	}
	current_length = 2;
	while (current_length <= row_length)
	{
		if (current_length == row_length)
		{
			ft_putchar('o');
			ft_putchar('\n');
			return ;
		}
		ft_putchar('-');
		current_length++;
	}												
	ft_putchar('\n');
	return ;
}

void	print_pipe_line(int row_length)
{
	int	current_length;

	ft_putchar('|');
	if (row_length == 1)
	{
		ft_putchar('\n');
		return ;
	}
	current_length = 2;
	while (current_length < row_length)
	{
		ft_putchar(' ');
		current_length++;
	}
	ft_putchar('|');
	ft_putchar('\n');
	return ;
}
