#include <stdio.h>
#include <math.h>

double area_circle(void)
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    return radius * radius * M_PI;
}


double area_ring()
{
    // Calls upon the function area circle twice and subtracts the first from the second
    printf("For the ring enter the area of each circle seperately the first request is the larger one.\n");
    return area_circle() - area_circle();
}

double f_to_c(int fahr)
{
    double cels;
    cels = (fahr - 32.0) * 5.0/9.0;
    return cels;
}

double euros(double dollars)
{
    printf('empty func');
}

int main(void)
{
    double radi = area_circle();
    printf("The cirle's radius is: %f:\n", radi);
    
    double ring = area_ring();
    printf("The rings's radius is: %f:\n", ring);

    int fa; 
    scanf("%d", &fa);
    printf("The temperature is %f", f_to_c(fa));

    return 0;
}