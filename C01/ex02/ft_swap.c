#include <stdio.h>
#include <unistd.h>


void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(void) 
{
	int a = 2000;
	int b = 2005;

	printf("a & b before swap : %d %d\n" , a, b);
	ft_swap(&a , &b);
	printf("a & b after swap : %d %d\n" , a, b);
	return 0;
}
