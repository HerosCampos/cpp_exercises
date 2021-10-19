#include <iostream>
#include <string>
#include <vector>


int main()
{
    // int luckyNumbers[5] = {2, 3, 5, 7, 9};

    // std::cout << &luckyNumbers[0] << std::endl;
    // std::cout << luckyNumbers << std::endl;
    // std::cout << luckyNumbers[0] << std::endl;

    // std::cout << *(luckyNumbers + 2) << std::endl;

    int luckyNumbers[5];

    for(int i = 0; i <= 4; i++)
    {
        std::cout << "Enter a value: ";
        std::cin >> luckyNumbers[i];
    }

    for(int i = 0; i <= 4; i++)
    {
        std::cout << *(luckyNumbers + i) << " ";
    }

}