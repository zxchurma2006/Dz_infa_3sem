#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%i %i", &n, &m);
    int S = 0;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                S+=i * j;
            } 
            else 
            {
                S-=i * j;
            }
        }
    }
    printf("%i", S);
}
