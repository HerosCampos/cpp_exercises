#include <iostream>
#include <vector>
#include <string>


std::vector<int> vec_nums{};


void add_number()
{
    std::cout << "Enter a number to add in the list: ";
    int numb{};
    std::cin >> numb;

    vec_nums.push_back(numb);
}


void print_vector()
{
    std::cout << "The numbers inside the list are: ";
    for(int n: vec_nums)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}


void delete_number()
{
    std::cout << "Enter a number you would like to delete: ";
    int numb_to_delete{};
    std::cin >> numb_to_delete;

    for(int i{}; i < vec_nums.size(); i++)
    {
        if(vec_nums[i] == numb_to_delete)
        {
            vec_nums.erase(vec_nums.begin() + i);
        }
    }
}


int main()
{
    
    int opt{};

    while(true)
    {
        std::cout << "1 - to add a number\n2 - to check the vector\n3 - to delete a number\n4 - to clean the vector\n5 - to exit\n\n--- Enter a number: ";
        std::cin >> opt;

        if(opt == 1)
        {
            add_number();
        }
        else if(opt == 2)
        {
            print_vector();
        }
        else if(opt == 3)
        {
            delete_number();
        }
        else if(opt == 4)
        {
            vec_nums.clear();
            std::cout << "The list is empty!" << std::endl;
        }
        else if(opt == 5)
        {
            break;
        }
        else
        {
            std::cout << "Invalid Option, try again..." << std::endl;
        }
    }
}



