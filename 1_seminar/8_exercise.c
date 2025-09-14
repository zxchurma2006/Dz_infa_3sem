#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	scanf(" %i", &n);
	int a;
	int massiv[1000];
	for (int i = 0; i < n; i++)
	{
		scanf(" %i", &a);
		massiv[i] = a;
		massiv[n+i] = a;
	}
	for (int j = 0; j < (2*n); j++)
	{
		if (j == 0)
		{
			printf("%d", massiv[j]);
		}
		else
		{
			printf(" %d", massiv[j]);
		}
	}
}