#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>


int main()
{
    std::vector<std::pair<int, std::pair<std::string, double>>> prod;

    while(true)
    {
        std::cout << "[ 1 ] to insert an item\n[ 2 ] to delete an item\n[ 3 ] to check a list with all items\n[ 4 ] to close the program\n - Choose an option: ";
        int opt{0};
        std::cin >> opt;
        
        if(opt == 1)
        {
            std::cout << "Enter the number id: ";
            int id{0};
            std::cin >> id;

            std::cout << "Enter the products name: ";
            std::string prod_name;
            std::cin >> prod_name;

            std::cout << "Enter the price of the product: ";
            double price{0.0};
            std::cin >> price;

            prod.push_back(std::make_pair(id, std::make_pair(prod_name, price)));
        }

        else if(opt == 2)
        {
            std::cout << "What is the Product Id of the item that you want to delete? ";
            int id_delete {0};
            std::cin >> id_delete;

            for(int i = 0; i < prod.size(); i++)
            {
                if(prod[i].first == id_delete)
                {
                    std::cout << "The product " << prod[i].second.first << " has been deleted!" << std::endl;
                    prod.erase(prod.begin() + i);
                    continue;
                }
            }
            std::cout << "Code id not found!" << std::endl;
        }

        else if(opt == 3)
        {
            for(auto i: prod)
            {
                std::cout << i.first << ": " << i.second.first << " - $" << i.second.second << std::endl;
            }
        }

        else if(opt == 4)
        {
            break;
        }

        else
        {
            std::cout << "Invalid option, please try again..." << std::endl;
        }
    }
}
