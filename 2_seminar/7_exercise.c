#include <stdio.h>

int count_even(int array[100], int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			sum++;
		}
	}
	return sum;
}

int main()
{
	int array[100];
	int size;
	printf("size: ");
    scanf("%d", &size);
	printf("array: ");
	for( int i = 0; i < size; i++)
	{
    	scanf("%d", &array[i]);
    }
    printf("%d", count_even(array, size));
    return 0;
}