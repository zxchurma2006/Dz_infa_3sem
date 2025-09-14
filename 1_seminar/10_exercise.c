#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	int m;
	scanf(" %i %i", &n, &m);
	int a;
	int massiv[10000];
	int len = n * m;
	for(int i = 0; i < len; i++)
	{
		scanf(" %i", &a);
		massiv[i] = a;
	}
	for (int j = 0; j < m; j++)
	{
		int sum = 0;
		for(int k = 0; k < n; k++)
		{
			sum = sum + massiv[j+(m * k)];
		}
		printf("%i ", sum);
	}
}
