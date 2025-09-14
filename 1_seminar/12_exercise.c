#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
    scanf(" %i", &n);
    int A[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf(" %i", &A[i][j]);
        }
    }
    int B[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf(" %i", &B[i][j]);
        }
    }
    int C[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            C[i][j] = 0; 
            for (int k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
//я не нашла файлики для этой задачи
//т к не знала в каком формате там данные второй пункт не решала