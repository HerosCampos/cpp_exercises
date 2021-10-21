#include <iostream>
#include <vector>
#include <string>


int main()
{
    int size{0};
    std::cout << "Size of the array: ";
    std::cin >> size;

    int *newArray = new int[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Size[" << i << "]: ";
        std::cin >> newArray[i];
    }
    std::cout << "---------------" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << "Position " << i << ": " << newArray[i] << std::endl; // or *(newArray + i)
    }

    delete[]newArray;
    newArray = NULL;
}
