#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>


int main()
{
    std::map<int, std::pair<int, std::pair<int, std::string>>> prod;

    prod.insert(std::make_pair(10, std::make_pair(111, std::make_pair(222, "AAAAAAAA"))));
    prod.insert(std::make_pair(11, std::make_pair(444, std::make_pair(333, "BBBBBBBB"))));
    prod.insert(std::make_pair(12, std::make_pair(234, std::make_pair(432, "VVVVCCDF"))));
    prod.insert(std::make_pair(13, std::make_pair(876, std::make_pair(556, "ERTRTERR"))));


    for(auto i: prod)
    {
        std::cout << i.first << " - " << i.second.first << " - " << i.second.second.first << " - " << i.second.second.second << std::endl;
    }

    std::cout << "--------------------------" << std::endl;
    // prod.erase(12); //erase the value based on a key value (not position)
    // prod.clear() //erase all data inside the map

    // for(auto i: prod)
    // {
    //     std::cout << i.first << " - " << i.second.first << " - " << i.second.second.first << " - " << i.second.second.second << std::endl;
    // }


    std::map<int, std::pair<int, std::pair<int, std::string>>>::iterator itmap;
    itmap = prod.find(12);
    if(itmap == prod.end())
    {
        std::cout << "Value not found!";
    }
    else
    {
        std::cout << "Value found!" << std::endl;
        std::cout << (*itmap).first << " - " << (*itmap).second.first << " - " << (*itmap).second.second.first << " - " << (*itmap).second.second.second << std::endl;
    }

}