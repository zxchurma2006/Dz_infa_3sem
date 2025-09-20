#include <stdio.h>

float yearfrac(int year, int day) 
{
    if (year % 4 == 0) 
    {
        float y = day;
        float x = y/366;
        return x;
    }
    else 
    {
        float y = day;
        float x = y/365;
        return x;
    }
}
int main() 
{
    int year, day;
    scanf("%i %i", &year, &day);
    printf("%.5f", yearfrac(year, day));
}
