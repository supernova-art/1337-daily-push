#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

int main(void)
{
	int a = 20;
	int b = 5;
	ft_ultimate_div_mod(&a , &b);
	printf("a(division) = %d\n" , a);
	printf("b(moduos) = %d\n" , b);
	return 0;
}

