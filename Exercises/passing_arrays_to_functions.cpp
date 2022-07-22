#include <iostream>
#include <vector>
#include <string>


void print_array(int numb[], size_t size)
{
    for(size_t i{0}; i< size; i++)
    {
        std::cout << numb[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    int ages[] {45, 15, 99, 78, 60};
    print_array(ages, 5);
}
