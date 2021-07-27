#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

int main()
{
    std::map<std::string, double> person;
    std::string name;
    double weight;
    char stop;

    while(true)
    {
        std::cout << "Name: ";
        std::cin >> name;

        std::cout << "Weight: ";
        std::cin >> weight;

        person.insert(std::make_pair(name, weight));

        while(true)
        {
            std::cout << "Do you want to continue? [Y/N] ";
            std::cin >> stop;

            if(stop == 'Y' || stop == 'y')
            {
                break;
            }
            else if(stop == 'N' || stop == 'n')
            {
                break;
            }
        }
        if(stop == 'N' || stop == 'n')
        {
            break;
        }
    }

    for(std::pair<std::string, double> i: person) // Or I could use: for(auto i: person)
    {
        std::cout << "Name: " << i.first << "\nWeight: " << i.second << std::endl;
    }

    // for(auto i = person.begin(); i != person.end(); i++) // just writing another way to interact over the map/pair
    // {
    //     std::cout << "Name: " << (*i).first << "\nWeight: " << (*i).second << std::endl;
    // }
}