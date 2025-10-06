#include <stdio.h>
#include <math.h>
#define EPS 1e-10

int solve_quadratic(double a, double b, double c, double* px1, double* px2) 
{
    if (fabs(a) < EPS) 
    {
        if (fabs(b) < EPS) 
        {
            return 0; 
        }
        *px1 = -c / b;
        return 1;
    }
    
    double discriminant = b * b - 4 * a * c;
    if (discriminant < -EPS) 
    {
        return 0; 
    }
    else if (fabs(discriminant) < EPS) 
    {
        *px1 = -b / (2 * a);
        return 1;
    }
    else 
    {
        double sqrt_d = sqrt(discriminant);
        *px1 = (-b - sqrt_d) / (2 * a);
        *px2 = (-b + sqrt_d) / (2 * a);
        return 2;
    }
}

int main() 
{
    double a, b, c;
    double x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    int result = solve_quadratic(a, b, c, &x1, &x2);
    switch (result) 
    {
        case 0:
            printf("no roots\n");
            break;
        case 1:
            printf("1 roots %.10lf\n", x1);
            break;
        case 2:
            printf("2 roots %.10lf, %.10lf\n", x1, x2);
            break;
    }
    return 0;
}