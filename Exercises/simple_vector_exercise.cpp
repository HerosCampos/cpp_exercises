#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{};

    std::cout << "How many data items do you have? ";
    int data_items{};
    std::cin >> data_items;

    for(int i = 0; i < data_items; i++) {
        std::cout << "Enter the number of the " << i + 1 << " position: ";
        int num{};
        std::cin >> num;
        nums.push_back(num);
    }
    for(auto n: nums) {
        std::cout << n << std::endl;
    }
}
