#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nb)
{
	*********nb = 42;
}

int main(void)
{
	int i = 1221;

	int *p1 = &i;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	
	printf("before edting = %d\n" , i);

	ft_ultimate_ft(p9);

	printf("after editing = %d\n" , i);
	return 0;
}
