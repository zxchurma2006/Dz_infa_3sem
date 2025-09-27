#include <stdio.h>
#define MAX 100

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            A[i][j] = B[i][j];
        }
    }
}

int main()
{
    float matrixA[MAX][MAX];
    float matrixB[MAX][MAX];
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrixB[i][j]);
        }
    }
    
    assign(matrixA, matrixB, n);
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%.2f ", matrixA[i][j]);
        }
        printf("\n");
    }
    return 0;
}