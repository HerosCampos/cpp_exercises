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
            double number_to_add{};
            std::cin >> number_to_add;
            vec_double.push_back(number_to_add);

            std::cout << "\n" << number_to_add << " added!\n";
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
        else if(num == 3)
        {
            std::cout << "Enter a number to divide the numbers in the vector: ";
            double number_to_divide{};
            std::cin >> number_to_divide;

            for(auto i{0}; i < vec_double.size(); i++)
            {
                vec_double[i] = vec_double[i] / number_to_divide;
            }
        }
        else if(num == 4)
        {
            std::cout << "Enter a number you want to delete: ";
            double number_to_delete{};
            std::cin >> number_to_delete;

            for(auto i{0}; i < vec_double.size(); i++)
            {
                if(vec_double[i] == number_to_delete)
                {
                    vec_double.erase(vec_double.begin() + i);
                }
            }

        }
        else if(num == 5)
        {
            std::cout << "The vector is empty!\n";
            vec_double.clear();
        }
        else if(num == 6)
        {
            std::cout << "Numbers inside the vector are [ ";
            for(auto n: vec_double)
            {
                std::cout << n << " ";
            }
            std::cout << "]\n";
        }
        else if(num == 7)
        {
            break;
        }
        else
        {
            std::cout << "Wrong option, try again...\n";
        }
    }
}
