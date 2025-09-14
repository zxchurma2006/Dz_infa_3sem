#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%i", &n);
    for(int j = 1; j <=n ; j++) 
    {
        printf("%3i %s %3i %s %3i\n", j, "->", j*j, "->",j*j*j);
    }
}

