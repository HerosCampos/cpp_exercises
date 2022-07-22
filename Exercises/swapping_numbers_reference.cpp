#include <iostream>
#include <vector>
#include <string>


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int x{10}, y{20};
    std::cout << "Before swapping: " << x << " and " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping: " << x << " and " << y << std::endl;
}
