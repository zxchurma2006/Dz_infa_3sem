#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long d = a+c-a%c;
    for (long long i = d; i <= b; i+=c) 
    {
        if(i%c == 0) 
        {
            printf("%lld %s", i, " ");
        }
    }
}

