#include <iostream>
#include <ctime>
#include <cstdlib>


int main() 
{
    int biggest {0};
    int smallest {0};

    srand(time(0));  // Initialize random number generator.     
    std::cout << "The random numbers generated between 1 and 10 are: ";

    for(int i = 0; i < 5; i++)
    {
        int random_number = (rand() % 10) + 1;
        std::cout << random_number << " "; 
        if(i == 0)
        {
            biggest = random_number;
            smallest = random_number;
        }
        else
        {
            if(random_number > biggest)
            {
                biggest = random_number;
            }
            if(random_number < smallest)
            {
                smallest = random_number;
            }
        }
    }
    std::cout << "\nThe biggest random number generated is: " << biggest << std::endl; 
    std::cout << "The smallest random number generated is: " << smallest << std::endl;
}