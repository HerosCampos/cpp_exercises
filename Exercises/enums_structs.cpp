#include <iostream>
#include <string>
#include <vector>


enum Colors {red, green, blue, black, orange};


struct product
{
    int weight;
    double value;
    Colors color;
};


int main()
{
    product laptop;
    laptop.color = Colors::black;
    laptop.value = 4235.55;
    laptop.weight = 4;

    std::cout << "Laptop Color: " << laptop.color << std::endl;
    std::cout << "Laptop Value: " << laptop.value << std::endl;
    std::cout << "Laptop Weight: " << laptop.weight << std::endl;


    // enum Color {red = 33, green = 44, blue = 55};
    // Color myColor = Color::blue;
    // std::cout << myColor << std::endl;
}
