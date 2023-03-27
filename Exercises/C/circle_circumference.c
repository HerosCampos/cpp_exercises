#include <stdio.h>


int main()
{
    const double PI = 3.14159;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    double radius;
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %lf", circumference);
    printf("\nArea of a Circle: %lf", area);
}
