#include <iostream>
#include <vector>
#include <string>
#include <fstream>


int main()
{
    std::ifstream in_file;
    char c{};

    in_file.open("schopenhauer.txt");
    if(!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    while(in_file.get(c))
    {
        std::cout << c;
    }
    std::cout << std::endl;

    in_file.close();
}




// int main()
// {
//     std::ifstream in_file;
//     std::string line;

//     in_file.open("schopenhauer.txt");
//     if(!in_file)
//     {
//         std::cerr << "Problem opening file" << std::endl;
//         return 1;
//     }

//     while(std::getline(in_file, line))
//     {
//         std::cout << line << std::endl;
//     }


//     in_file.close();
// }
