#include <stdio.h>

int c;
int is_even(int a)
{
	c = a % 2;
	if (c == 0)
	{
		return 1;
	}
	if (c == 1)
	{
		return 0;
	}
}

int main()
{
	printf("%i\n", is_even(90));
	printf("%i\n", is_even(91));
	return 0;
}