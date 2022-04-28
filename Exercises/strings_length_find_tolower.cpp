#include <iostream>
#include <vector>
#include <string>

int main()
{
    int space_counter {};
    int letter_counter {};
    std::vector<int> vecLetCounter{};

    std::cout << "Enter your name: ";
    std::string person_name;
    std::getline(std::cin, person_name);


    for(auto l: person_name) {
        std::cout << l << " ";
        if(isspace(l)) { // we use isspace() to count white spaces
            space_counter += 1;
        }
    }

    std::cout << "\nWhat letter would you like to count: ";
    char letter_to_be_counted {};
    std::cin >> letter_to_be_counted;

    for(int i{}; i < person_name.length(); i++) {
        if(std::tolower(person_name[i]) == letter_to_be_counted) {
            letter_counter += 1;
            vecLetCounter.push_back(i);
        }
    }


    std::cout << "\nThe first letter E is at the index: " << person_name.find('e') << std::endl;
    std::cout << "The name has " << person_name.length() << " caracters with spaces" << std::endl;
    std::cout << "The name has " << person_name.length() - space_counter << " caracters without spaces" << std::endl;
    std::cout << "\nThe letter that you chose repeats " << letter_counter << " times" << std::endl;
    std::cout << "The letter that you chose is at the index [ ";
    for(int n: vecLetCounter) {
        std::cout << n << " ";
    }
    std::cout << " ]";
}


