#include <iostream>
#include <vector>
#include <string>


void swap(int *value1, int *value2)
{
    int temp {0};
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}


int main()
{
    std::cout << "Enter the first value: ";
    int value1 {0};
    std::cin >> value1;

    std::cout << "Enter the second value: ";
    int value2 {0};
    std::cin >> value2;

    swap(&value1, &value2);

    std::cout << "Swapping values..." << std::endl;

    std::cout << "First value: " << value1 << std::endl;
    std::cout << "Second value: " << value2 << std::endl;
}