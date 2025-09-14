#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int n;
int max = 0;
int count = 0;
int main()
{
	scanf("%d", &n);
	printf("%d", n);
	while (n != 1)
	{
		if (n > max)
			max = n;
		if ((n%2) == 1)
		{
			n = 3*n+1;
		}
		else if ((n%2) == 0)
		{
			n = n/2;
		}
		count++;
		printf(" %d", n);
	}
	printf ("\nLength = %d, Max = %d\n", count, max);


}