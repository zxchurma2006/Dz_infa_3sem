#include <stdio.h>
#include <limits.h>

int main()
{
	int n;
	scanf("%i", &n);
	int max = INT_MIN;
	int count = 0;
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		int a;
		scanf("%i", &a);
		if (a > max)
		{
			max = a;
			count = 0;
		}
		c == a;
		if (a == max);
		{
			count++;
		}
	}
	printf("%i %i\n", max, count);
	return 0;
}