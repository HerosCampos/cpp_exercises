#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>


int main()
{
    std::ifstream in_file{"schopenhauer.txt"};
    std::ofstream out_file{"schopenhauer_out.txt"};

    if(!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }

    
    std::string line{};
    int line_number{0};
    while(getline(in_file, line))
    {
        ++line_number;
        out_file << std::setw(7) << std::left << line_number << line << std::endl;
    }

    std::cout << "\nCopy complete" << std::endl;
    in_file.close();
    out_file.close();
}
