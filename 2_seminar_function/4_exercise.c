#include <stdio.h>

int sum_og_digits(int a)
{
	int sum = 0;
	while (a != 0)
	{
		sum = sum + (a % 10);
		a = a / 10;
	}
	return sum;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d ", sum_og_digits(a));
	return 0;
}
