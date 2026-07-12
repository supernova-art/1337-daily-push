#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
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

void ft_putnbr(int nb)
{
	if(nb <  0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}

	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);

}

void ft_print_arr(int *arr, int size)
{
	int i = 0;
	while(i < size)
	{
		ft_putnbr(arr[i]);
		if(i < size -1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size - 1)
		{
			if(tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
int main(void)
{

	int arr[6] = {233, 121, 93, 12, 2005};
	int size = 6;
	ft_putstr("before sorting : ");
	ft_print_arr(arr, size);

	ft_sort_int_tab(arr, size);
	ft_putstr("after sorting: ");
	ft_print_arr(arr, size);

	return 0;
}
