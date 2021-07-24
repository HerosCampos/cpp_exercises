#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
    std::vector<int> unique_numbers;
    int v {0};
    char stop;

    while (true)
    {
        std::cout << "Enter a value: ";        
        std::cin >> v;        

        if(std::count(unique_numbers.begin(), unique_numbers.end(), v))
        {
            std::cout << "The value is already in the vector!" << std::endl;
        }
        else
        {
            unique_numbers.push_back(v);
            std::cout << "Value " << v << " added successfully" << std::endl;
        }

        while(true)
        {
            std::cout << "Do you want to continue? [Y/N] ";
            std::cin >> stop;
            if (stop == 'N' || stop == 'n')
            {
                break;
            }
            else if (stop == 'Y' || stop == 'y')
            {
                break;
            }            
        }
        if (stop == 'N' || stop == 'n')
        {
            break;
        }
    }    
}
