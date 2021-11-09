#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::string name;
    while(name.empty())
    {
        std::cout << "Enter your full name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Welcome " << name << std::endl;
}
