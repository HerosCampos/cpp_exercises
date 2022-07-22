#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<int> vec_even{};
    std::vector<int> vec_odd{};

    char stopFlag{};

    while(true)
    {
        std::cout << "Enter a number: ";
        int num{};
        std::cin >> num;
        
        if(num % 2 == 0)
        {
            vec_even.push_back(num);
        }
        else
        {
            vec_odd.push_back(num);
        }


        
        while(true)
        {
            std::cout << "Would you like to continue? [Y/N] ";
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

    
    std::cout << "The even numbers are: [";
    for(auto n: vec_even)
    {
        std::cout << n << " ";
    }

    std::cout << "]" << std::endl;

    std::cout << "The odd numbers are: [";
    for(auto n: vec_odd)
    {
        std::cout << n << " ";
    }

    std::cout << "]" << std::endl;    
}

