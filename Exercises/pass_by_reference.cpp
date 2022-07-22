#include <iostream>
#include <vector>
#include <string>


void scale_number(int &num)
{
    if(num > 100)
    {
        num = 100;
    }
}


int main()
{
    int number{1000};
    scale_number(number);
    std::cout << number << std::endl;
}
