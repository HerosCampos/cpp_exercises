#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

int main()
{
    std::map<std::string, std::pair<double, double>> grades;
    std::string student_name, spec_student;
    double score1;
    double score2;
    char stop;


    while(true)
    {
        std::cout << "Student name: ";
        std::cin >> student_name;

        std::cout << "Score 1: ";
        std::cin >> score1;

        std::cout << "Score 2: ";
        std::cin >> score2;

        grades.insert(std::make_pair(student_name, std::make_pair(score1, score2)));

        while(true)
        {
            std::cout << "Do you want to continue? [Y/N] ";
            std::cin >> stop;

            if(stop == 'N' || stop == 'n')
            {
                break;
            }
            else if(stop == 'Y' || stop == 'y')
            {
                break;
            }
        }
        if(stop == 'N' || stop == 'n')
        {
            break;
        }
    }

    std::cout << "---------------------------------------" << std::endl;

    for(auto i: grades)
    {
        std::cout << i.first << " - Total Average: " << (i.second.first + i.second.second) / 2 << std::endl;
    }

    std::cout << "---------------------------------------" << std::endl;

    std::map<std::string, std::pair<double, double>>::iterator itmap;

    while(true)
    {
        std::cout << "Enter the name of the student to check their grades: [Exit to leave the prompt] ";
        std::cin >> spec_student;

        if(spec_student == "Exit" || spec_student == "exit")
        {
            break;
        }

        itmap = grades.find(spec_student);
        if(itmap == grades.end())
        {
            std::cout << "Value not found!" << std::endl;
        }
        else
        {
            std::cout << "Value found!" << std::endl;
            std::cout << (*itmap).first << " - Score 1: " << (*itmap).second.first << " - Score 2: " << (*itmap).second.second << std::endl;
        }
    }
}
