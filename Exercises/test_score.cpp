#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter your score on the exam: (0 - 100) ";
    int score {};
    std::cin >> score;

    char letter_grade{};
    if(score >= 0 && score <= 100)
    {
        if(score > 90)
        {
            letter_grade = 'A';
        }
        else if(score > 80)
        {
            letter_grade = 'B';
        }
        else if(score > 70)
        {
            letter_grade = 'C';
        }
        else if(score > 60)
        {
            letter_grade = 'D';
        }
        else
        {
            letter_grade = 'F';
        }
        std::cout << "Your grade is: " << letter_grade << std::endl;

        if(letter_grade == 'F')
        {
            std::cout << "Sorry, you must repeat this class" << std::endl;
        }
        else
        {
            std::cout << "Congratulations, you passed!" << std::endl;
        }
    }
    else 
    {
        std::cout << "Sorry, " << score << " is not in range." << std::endl;
    }

}
