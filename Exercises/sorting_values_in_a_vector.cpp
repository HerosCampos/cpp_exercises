#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
    std::vector<int> values{};
    int value {0};
    char stop;


    while(true)
    {
        std::cout << "Enter a value: ";
        std::cin >> value;

        values.push_back(value);

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

    std::sort(values.begin(), values.end());
    for(int i: values)
    {
        std::cout << i << std::endl;
    }
}
