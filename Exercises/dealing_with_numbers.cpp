#include <iostream>
#include <string>
#include <vector>


int main()
{
    char cont;
    int num = 0;
    int soma = 0;
    int count = 0;
    int biggest = 0;
    int smallest = 0;

    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;

        if(count == 0)
        {
            biggest = num;
            smallest = num;
        }
        else
        {
            if(num > biggest)
            {
                biggest = num;
            }
            else if(num < smallest)
            {
                smallest = num;
            }
        }

        soma += num;
        count += 1;

        while(true)
        {
            std::cout << "Would you like to continue? [Y/N]";
            std::cin >> cont;
            if(cont == 'N' || cont == 'n')
            {
                break;
            }
            else if(cont == 'Y' || cont == 'y')
            {
                break;
            }
        }
        if(cont == 'N' || cont == 'n')
        {
            break;
        }
    }
    std::cout << "You entered " << count << " values and the average is " << (double)soma / count << std::endl;
    std::cout << "The biggest number is: " << biggest << "\nThe smallest number is: " << smallest << std::endl;
}
