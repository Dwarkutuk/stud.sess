#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;
	
	ch = '0';
	while(ch <= '9')
	{
		write(1, &ch, 1);
		ch++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers();
}
