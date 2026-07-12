#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int x, int y)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');

	if(x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}

}
void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while(x <= 98)
	{
		y = x + 1;
		while(y <= 99)
		{
			ft_putnbr(x, y);
			y++;
		}
		x++;
	}
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
