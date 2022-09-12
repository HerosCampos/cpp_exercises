#include <iostream>
#include <vector>

const double pi{3.14159};


double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    return pi * (radius * radius) * height;
}

void area_circle()
{
    std::cout << "Enter the radius of the circle: ";
    double radius{};
    std::cin >> radius;

    std::cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) << std::endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    std::cout << "Volume of the cylinder with radius " << radius << " and height " << height << " is: " << calc_volume_cylinder(radius, height) << std::endl;
}


int main()
{
    area_circle();
    volume_cylinder();
}
