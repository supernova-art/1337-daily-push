#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}

	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_print_arr(int *arr, int size)
{
	int i = 0;
	while(i < size)
	{
		ft_putnbr(arr[i]);
		ft_putchar(',');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int first;
	int last;

	first = 0;
	last = size - 1;
	while(first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}


}
int main(void)
{
	int arr[3] = {122, 31, 43};
	int size = 3;
	ft_putstr("before reversing : ");
	ft_print_arr(arr, size);

	ft_rev_int_tab(arr, size);

	ft_putstr("after reversing : ");
	ft_print_arr(arr, size);

	return 0;
}
