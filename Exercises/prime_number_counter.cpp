#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;

    int div{};

    for(int i{1}; i <= num; i++) {
        if(num % i == 0) {
            div += 1;
        }
    }

    std::cout << "The number " << num << " can be divided " << div << " times" << std::endl;

    if(div <= 2) {
        std::cout << "It is a prime number";
    } else {
        std::cout << "It is not a prime number";
    }
}
