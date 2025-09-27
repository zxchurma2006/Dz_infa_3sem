#include <stdio.h>

int print_even(int a, int b)
{
	while (a < b)
	{
		if (a % 2 == 0)
		{
			printf("%i ", a);
		}
		a++;
	}
}

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	print_even(a, b);
	return 0;
}

