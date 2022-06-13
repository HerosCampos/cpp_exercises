#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<double> vec_double{};
    
    while(true)
    {
        std::cout << "\n1 - To add a number\n";
        std::cout << "2 - To multiply the numbers in the vector by a number of your choice\n";
        std::cout << "3 - To divide the numbers in the vector by a number of your choice\n";
        std::cout << "4 - To delete a number\n";
        std::cout << "5 - To clear the vector\n";
        std::cout << "6 - To show the vector\n";
        std::cout << "7 - To exit\n\n";
        std::cout << "---- Your choice: ";
        int num;
        std::cin >> num;

        if(num == 1)
        {
            std::cout << "Enter a number to add to the vector: ";
            double number_to_add;
            std::cin >> number_to_add;

            vec_double.push_back(number_to_add);
        }
        else if(num == 2)
        {
            std::cout << "Enter a number to multiply the numbers in the vector: ";
            double number_to_multiply{};
            std::cin >> number_to_multiply;

            for(auto i{0}; i < vec_double.size(); i++)
            {
                vec_double[i] = vec_double[i] * number_to_multiply;
            }
        }
        else if(num == 3) // still have to improve this code
        {
            std::cout << "Enter a number to divide the numbers in the vector: ";
            double number_to_divide{};
            std::cin >> number_to_divide;

            for(int i{0}; i < vec_double.size(); i++)
            {
                vec_double[i] = vec_double[i] / number_to_divide;
            }
        }
        else if(num == 4)
        {
            std::cout << "What number do you want to delete? ";
            double number_to_delete;
            std::cin >> number_to_delete;

            if(std::count(vec_double.begin(), vec_double.end(), number_to_delete))
            {
                for(int i{0}; i < vec_double.size(); i++)
                {
                    if(vec_double[i] == number_to_delete)
                    {
                        // vec_double.erase(i); // still have to improve this code
                        std::cout << "aaaaaaaaaaaaaaaaaaaaaaa" << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "The number " << number_to_delete << " was not found in the vector." << std::endl;
            }
        }
        else if(num == 5)
        {
            std::cout << "The vector is empty!" << std::endl;
            vec_double.clear();
        }
        else if(num == 6)
        {
            std::cout << "The numbers inside the vector are: [ ";
            for(int n: vec_double)
            {
                std::cout << n << " ";
            }
            std::cout << "]" << std::endl;
        }
        else if(num == 7)
        {
            break;
        }
        else
        {
            std::cout << "Wrong option, try again..." << std::endl;
        }
    }
}
