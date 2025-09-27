#include <stdio.h>

void bob(int n);

void alice(int n)
{
	n = n * 3 + 1;
	printf("Alise: %d\n", n);
	bob(n);
}

void bob(int n)
{
	if (n == 1)
	{
		printf("Bob: 1\n");
		return;
	}
	if (n % 2 == 0)
	{
		n = n / 2;
		if (n == 1)
		{
			printf("Bob: 1\n");
			return;
		}
		printf("Bob: %d\n", n);
		bob(n);
	}
	else
	{
		alice(n);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	alice(n);
	return 0;
}