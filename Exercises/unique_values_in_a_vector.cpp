#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{
    std::vector<int> unique_numbers;
    int v {0};
    char stop;

    while (true)
    {
        std::cout << "Enter a value: ";        
        std::cin >> v;        

        if(std::count(unique_numbers.begin(), unique_numbers.end(), v))
        {
            std::cout << "The value is already in the vector!" << std::endl;
        }
        else
        {
            unique_numbers.push_back(v);
            std::cout << "Value " << v << " added successfully" << std::endl;
        }
    }    
}

// int main()
// {    
//     std::vector<int> v;
//     int key {0};

//     while(true)
//     {
        
//         std::cout << "Enter a number: ";        
//         std::cin >> key;
    
//         if (std::find(v.begin(), v.end(), key) != v.end()) {
//             std::cout << "Element found" << std::endl;
//         }
//         else {
//             v.push_back(key);
//             std::cout << "Element added successfully" << std::endl;
            
//         }
//     }
// }