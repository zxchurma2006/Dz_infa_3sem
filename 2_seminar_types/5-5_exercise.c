#include <stdio.h>
#include <math.h>
#define EPSILON 1e-5

int main() 
{
    double x1, y1, r1;
    double x2, y2, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    double sum_radii = r1 + r2;
    double diff_radii = fabs(r1 - r2);
    if (fabs(distance - sum_radii) < EPSILON || fabs(distance - diff_radii) < EPSILON) 
    {
        printf("Touch\n");
    }
    else if (distance < sum_radii && distance > diff_radii) 
    {
        printf("Intersect\n");
    }
    else 
    {
        printf("Do not intersect\n");
    }
    
    return 0;
}