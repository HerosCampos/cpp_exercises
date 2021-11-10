#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <time.h>



int main()
{
    int count{0};
    srand(time(NULL));
    int number = rand() % 10 + 1;
    std::cout << number << std::endl;

    std::cout << "Guess a number between 1 and 10: ";
    int guess{0};
    std::cin >> guess;

    while(true)
    {
        if(guess < number)
        {
            std::cout << "Too low, try again..." << std::endl;
            std::cout << "Guess a number between 1 and 10: ";
            std::cin >> guess;
            count++;
        }
        else if(guess > number)
        {
            std::cout << "Too high, try again..." << std::endl;
            std::cout << "Guess a number between 1 and 10: ";
            std::cin >> guess;
            count++;         
        }
        else if (guess == number)
        {
            std::cout << "You got it!" << std::endl;
            count++;  
            break;
        }
    }
    std::cout << "You've guessed " << count << " times." << std::endl;
}
