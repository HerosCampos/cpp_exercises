#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    int count{};
    int num{};
    std::vector<int> nums{};
    char stopFlag{};

    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;

        nums.push_back(num);

        count++;

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

    std::cout << "You typed " << count << " elements." << std::endl;
    std::cout << "The size of the vector is: " << nums.size() << std::endl;


    if(std::find(nums.begin(), nums.end(), 5) != nums.end())
    {
        std::cout << "The number 5 is in the vector!" << std::endl;
    }
    else
    {
        std::cout << "The number 5 is not in the vector!" << std::endl;
    }
}
