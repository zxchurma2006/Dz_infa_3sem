#include <stdio.h>

void reverse(int array[100], int size)
{
	int a;
	for (int i = 0; i < size / 2; i++)
	{
		a = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = a;
	}
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
    reverse(array, size);
    for (int i = 0; i < size; i++)
    {
    	printf("%d ", array[i]);
    }
    return 0;
}