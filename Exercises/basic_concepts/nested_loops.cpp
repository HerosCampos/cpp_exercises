#include <iostream>
#include <string>
#include <vector>


int main()
{
    char symbol;
    int width;
    int height;

    std::cout << "Enter the symbol to use: ";
    std::cin >> symbol;

    std::cout << "Enter the width: ";
    std::cin >> width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    for(int k = 0; k < height; k++)
    {
        for(int i = 0; i < width; i++)
        {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }
}
