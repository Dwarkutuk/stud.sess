#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;
	
	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
