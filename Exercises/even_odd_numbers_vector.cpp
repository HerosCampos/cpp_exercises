#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<int> odd_numbers;
    std::vector<int> even_numbers;
    char stop;
    int num {0};

    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;

        if(num % 2 == 0)
        {
            even_numbers.push_back(num);
        }
        else if(num % 2 == 1)
        {
            odd_numbers.push_back(num);
        }

        while(true)
        {
            std::cout << "Do you want to continue? [Y/N] ";
            std::cin >> stop;
            if(stop == 'Y' || stop == 'y')
            {
                break;
            }
            else if(stop == 'N' || stop == 'n')
            {
                break;
            }
        }
        if(stop == 'N' || stop == 'n')
        {
            break;
        }
    }

    std::cout << "The even numbers are: ";
    for(auto i: even_numbers)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    
    std::cout << "The odd numbers are: ";
    for(auto i: odd_numbers)
    {
        std::cout << i << " ";
    }
}