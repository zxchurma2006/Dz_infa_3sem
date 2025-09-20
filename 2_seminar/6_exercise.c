#include <stdio.h>

int trib(int a)
{
	int mas[100];
	mas[0] = 0;
	mas[1] = 0;
	mas[2] = 1;
	for (int i = 3; i <= a; i++)
	{
		mas[i] = mas[i-1] + mas[i-2] + mas[i-3];
	}
	return mas[a];
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", trib(a));
	return 0;
}
