#include <stdio.h>

void print_binary(int a)
{
	if (a > 1)
	{
		print_binary(a / 2);
	}
	printf("%d", a % 2);
}

int main()
{
	int a;
	scanf("%d", &a);
	print_binary(a);
	return 0;
}