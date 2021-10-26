#include <iostream>
#include <vector>
#include <string>


double calculate_mpg(int miles, int gallons)
{
    if(gallons == 0 || miles == 0)
    {
        throw 0;
    }
    return static_cast<double> (miles) / gallons;
}


int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    std::cout << "Enter the miles: ";
    std::cin >> miles;

    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << " miles per gallon." << std::endl;
    }
    catch(int &ex)
    {
        std::cerr << "You can't divide by zero." << std::endl;
    }
    


}
