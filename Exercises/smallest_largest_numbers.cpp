#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    int numb {0};
    char opt;
    double sum_of_all_numbers {0.0};
    int smallest_number {0};
    int biggest_number {0};


    while(opt != 'q' && opt != 'Q')    
    {
        std::cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\nEnter your choice: ";
        std::cin >> opt;

        if(opt == 'P' || opt == 'p')
        {
            if(numbers.size() == 0)
            {
                std::cout << "[ ] - the list is empty" << std::endl;
            }
            else
            {
                std::cout << "[";
                for(auto i: numbers)
                {
                    std::cout << i << " ";
                }
                std::cout << "] your list have " << numbers.size() << " numbers!" << std::endl;
            }
        }
        else if(opt == 'A' || opt == 'a')
        {
            std::cout << "Enter an integer to add to the list: ";
            std::cin >> numb;
            numbers.push_back(numb);
            sum_of_all_numbers += numb;

        }
        else if(opt == 'M' || opt == 'm')
        {
            std::cout << "The mean of the numbers inside the vector is: " << sum_of_all_numbers / numbers.size();
        }
        else if(opt == 'S' || opt == 's')
        {
            auto smallest_number = std::min_element(numbers.begin(), numbers.end()); // we can use std::min_element or we can make a for loop to catch the largest and smallest numbers
            std::cout << "The smallest number inside the vector is: " << *smallest_number;
        }
        else if(opt == 'L' || opt == 'l')
        {
            auto biggest_number = std::max_element(numbers.begin(), numbers.end());
            std::cout << *biggest_number;
        }

        std::cout << "\n-----------------------------------\n";
    }
}

