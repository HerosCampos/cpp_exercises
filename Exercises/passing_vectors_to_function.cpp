#include <iostream>
#include <vector>
#include <string>


void print_vector(const std::vector<int> &v)
{
    for(int p: v)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;
}


int main()
{
    std::vector<int> ages {33, 59, 77};
    print_vector(ages);
}
