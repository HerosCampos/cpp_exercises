#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << name;
}
