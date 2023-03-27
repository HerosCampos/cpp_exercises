#include <iostream>
#include <vector>


int main()
{
    std::cout << "Enter the first number: ";
    double num1{};
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    double num2{};
    std::cin >> num2;

    while(true) {
        std::cout << "1 - to sum the numbers\n2 - to subtract\n3 - To multiply\n4 - to divide\n5 - To choose new numbers\n6 - to quit\n -- Your option: ";
        int opt{};
        std::cin >> opt;

        if(opt == 1) {
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        } 
        else if(opt == 2) {
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        }
        else if(opt == 3) {
            std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl;
        }
        else if(opt == 4) {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        else if(opt == 5) {
            std::cout << "Enter the first number: ";
            std::cin >> num1;

            std::cout << "Enter the second number: ";
            std::cin >> num2;
        }
        else if(opt == 6) {
            break;
        }
        else {
            std::cout << "Wrong option, try again..." << std::endl;
        }
    }
}
