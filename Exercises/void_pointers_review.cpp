#include <iostream>
#include <string>
#include <vector>


void print_number(int *number_ptr)
{
    std::cout << *number_ptr << std::endl;
}

void print_letter(char *char_ptr)
{
    std::cout << *char_ptr << std::endl;
}


void print_all(void *ptr_all, char type)
{
    if(type == 'i')
    {
        std::cout << *((int*)ptr_all) << std::endl;
    }
    else if (type == 'c')
    {
        std::cout << *((char*)ptr_all) << std::endl;
    }
    
}



int main()
{
    int number = 5;
    print_number(&number);

    char letter = 'a';
    print_letter(&letter);

    std::cout << "------------------" << std::endl;

    print_all(&number, 'i');
    print_all(&letter, 'c');


    // int n = 5;

    // int *ptr_n = &n;

    // std::cout << n << std::endl;
    // std::cout << &n << std::endl;

    // std::cout << "------------------" << std::endl;

    // std::cout << ptr_n << std::endl;
    // std::cout << *ptr_n << std::endl;

    // *ptr_n = 10;
    // std::cout << *ptr_n << std::endl;

    // std::cout << "------------------" << std::endl;

    // int v;
    // int *ptr_v = &v;
    // *ptr_v = 15;

    // std::cout << *ptr_v << std::endl;
}
