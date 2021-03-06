#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    int num{};
    char stopFlag{};
    std::vector<int> nums{};
    std::vector<int> nums_even{};
    std::vector<int> nums_odd{};

    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
        nums.push_back(num);

        if(num % 2 == 0)
        {
            nums_even.push_back(num);
        }
        else
        {
            nums_odd.push_back(num);
        }


        while(true)
        {
            std::cout << "Do you want to continue? [Y/N] ";
            std::cin >> stopFlag;

            if(stopFlag == 'Y' || stopFlag == 'y' || stopFlag == 'N' || stopFlag == 'n')
            {
                break;
            }
        }
        if(stopFlag == 'N' || stopFlag == 'n')
        {
            break;
        }
    }

    std::cout << "The whole list: ";
    for(auto n: nums)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Even numbers: ";
    for(auto n: nums_even)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers: ";
    for(auto n: nums_odd)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}
