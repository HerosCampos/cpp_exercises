#include <iostream>
#include <vector>


int main()
{
    std::vector<int> data{};
    int num_items{};

    std::cout << "Enter the number of items: ";
    std::cin >> num_items;

    for(int i{1}; i <= num_items; ++i)
    {
        int data_item{};

        std::cout << "Enter data item " << i << ": ";
        std::cin >> data_item;
        data.push_back(data_item);
    }

    for(auto n: data)
    {
        for(int i{1}; i <= n; ++i)
        {
            if(i % 5 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
}
