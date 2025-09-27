#include <stdio.h>

int main() 
{
    int n;
    scanf("%i", &n);
    float sum = 0;
    for(int i = 1; i <= n; i++) 
    {
        if(i % 2 == 0) {
            sum-=1/(float(2*i-1));
        }
        else 
        {
            sum+=1/(float(2*i-1));
        }
    }
    printf("%f", 4*sum);
}
