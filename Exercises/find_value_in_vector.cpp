#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// HOW TO FIND A VALUE INSIDE A VECTOR
// int main()
// {
//     std::vector<int> v = { 4, 7, 5, 2, 6, 9 };
//     int key = 6;
 
//     if (std::find(v.begin(), v.end(), key) != v.end()) {
//         std::cout << "Element found";
//     }
//     else {
//         std::cout << "Element not found";
//     }
// }
int main()
{
    std::vector<int> unique_values{};
    int num{};
    char stopFlag{};

    while(true)
    {
        std::cout << "Enter a value: ";
        std::cin >> num;
        
        if(std::find(unique_values.begin(), unique_values.end(), num) != unique_values.end())        
        {
            std::cout << "The value " << num << " is already on the list." << std::endl;
        }
        else
        {
            unique_values.push_back(num);
            std::cout << "The value was added to the list." << std::endl;
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

    std::cout << "\nThe numbers in the vector are: ";
    for(int num: unique_values)
    {
        std::cout << num << " ";
    }
}
