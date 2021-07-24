#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


void biggest_smallest(std::vector<int> random_storage)
{
    int biggest {0};
    int smallest {0};

    for(auto i = 0; i < random_storage.size(); i++)
    {
        std::cout << random_storage[i] << " ";
        if(i == 0)
        {
            biggest = random_storage[i];
            smallest = random_storage[i];
        }
        else
        {
            if(random_storage[i] > biggest)
            {
                biggest = random_storage[i];
            }
            if(random_storage[i] < smallest)
            {
                smallest = random_storage[i];
            }
        }
    }

    std::cout << "\nThe biggest random number generated is: " << biggest << std::endl; 
    std::cout << "The smallest random number generated is: " << smallest << std::endl;
}


int main() 
{
    std::vector<int> random_storage;

    srand(time(0));  // Initialize random number generator.     
    std::cout << "The random numbers generated between 1 and 10 are: ";

    for(int i = 0; i < 5; i++)
    {
        int random_number = (rand() % 10) + 1;
        random_storage.push_back(random_number);        
    }

    biggest_smallest(random_storage);
}