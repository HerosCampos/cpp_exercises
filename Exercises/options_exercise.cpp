#include <iostream>
#include <vector>
#include <string>

int main()
{
    while(true)
    {
        std::cout << "Enter the first value: ";
        int value1{};
        std::cin >> value1;

        std::cout << "Enter the second value: ";
        int value2{};
        std::cin >> value2;

        int opt{};


        while(opt != 5) {
            std::cout << "[ 1 ] sum\n[ 2 ] multiplication\n[ 3 ] biggest\n[ 4 ] new numbers\n[ 5 ] exit\n >>>>> Choose an option: ";
            std::cin >> opt;

            if(opt == 1) {
                std::cout << "\nThe sum of " << value1 << " and " << value2 << " is: " << value1 + value2 << std::endl;
            } else if(opt == 2) {
                std::cout << "\nThe multiplication of " << value1 << " and " << value2 << " is: " << value1 * value2 << std::endl;
            } else if(opt == 3) {
                std::cout << "\nThe biggest value is: ";
                if(value1 > value2) {
                    std::cout << value1 << std::endl;
                } else {
                    std::cout << value2 << std::endl;
                }
            } else if(opt == 4) {
                break;
            } else if(opt == 5) {
                std::cout << "\nThank you!" << std::endl;
            } else {
                std::cout << "Wrong option, try again..." << std::endl;
            }
        }
        if(opt == 5) {
            break;
        }
    }
}
