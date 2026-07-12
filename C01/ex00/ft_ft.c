#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nb)
{
	*nb = 42;
}

int main(void)
{
	int i = 0;
	printf("before edit eith ptr : %d\n" , i);
       
	ft_ft(&i);
	printf("after editing : %d\n", i);
return 0;	
}
