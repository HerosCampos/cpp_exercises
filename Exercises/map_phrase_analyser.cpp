#include <iostream>
#include <vector>
#include <string>
#include <map>


void print_freq(std::map<char, int> freq)
{
    for(std::pair<char, int> i: freq)
    {
        std::cout << i.first << " - " << i.second << std::endl;
    }
    // std::cout << "-------" << std::endl;
    // for(auto i = freq.begin(); i != freq.end(); i++)
    // {
    //     std::cout << (*i).first << " - " << (*i).second << std::endl;
    // }
}


int main()
{
    std::cout << "Input a word or a phrase that you want to analyze: ";
    std::string test;
    std::getline (std::cin, test);

    std::map<char, int> freq;

    for(int i = 0; i < test.length(); i++)
    {
        char letter = test[i];
        if(freq.find(letter) == freq.end())
        {
            freq[letter] = 0;
        }
        freq[letter]++;
    }

    print_freq(freq);
}