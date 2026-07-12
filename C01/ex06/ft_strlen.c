#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}
int main(void)
{
	char arr[] = "hello world!";
	printf("the lenght is : %d\n", ft_strlen(arr));
	return 0;
}
