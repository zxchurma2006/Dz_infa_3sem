#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%i", &a[i]);
    }
    int m = 0;
    for (int i = 0; i < n; i++) 
    {
        if(a[i] >= 0) 
        {
            a[m]=a[i];
            m++;
        }
    }
    for(int i = 0; i < m; i++) 
    {
        printf("%i ", a[i]);
    }
}
