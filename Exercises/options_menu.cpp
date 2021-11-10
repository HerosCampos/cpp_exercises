#include <iostream>
#include <string>
#include <vector>


int main()
{
    int age{0};
    char gender;
    char cont;
    int people18{0};
    int man{0};
    int women_under_18{0};


    while(true)
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "        OPTIONS        " << std::endl;
        std::cout << "-----------------------" << std::endl;

        std::cout << "Age: ";
        std::cin >> age;

        std::cout << "Gender: [M/F] ";
        std::cin >> gender;

        if(age >= 18)
        {
            people18 += 1;
        }

        if(gender == 'M' || gender == 'm')
        {
            man += 1;
        }

        if(age < 20 && (gender == 'F' || gender == 'f'))
        {
            women_under_18 += 1;
        }

        std::cout << "-----------------------" << std::endl;
        while(true)
        {
            std::cout << "Would you like to continue? [Y/N] ";
            std::cin >> cont;

            if(cont == 'Y' || cont == 'y')
            {
                break;
            }
            else if(cont == 'N' || cont == 'n')
            {
                break;
            }
        }
        std::cout << "-----------------------" << std::endl;
        if(cont == 'N' || cont == 'n')
        {
            break;
        }
    }
    std::cout << "You entered " << people18 << " people with 18 years old or more." << std::endl;
    std::cout << "You entered " << man << " men in the system." << std::endl;
    std::cout << "You entered " << women_under_18 << " women with less than 20 years old." << std::endl;
}
