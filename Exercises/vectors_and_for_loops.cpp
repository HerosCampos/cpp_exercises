#include <iostream>
#include <vector>


int main()
{
    std::vector <int> nums {2, 3, 5, 1, 7, 6, 8};

    for(int n: nums)
    {
        std::cout << n << " ";
    }

    std::cout << "\n----------------" << std::endl;
    nums.push_back(9);

    for(int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << " ";
    }

    std::cout << "\n----------------" << std::endl;

    std::cout << "Please enter a number that you want to insert into the vector nums: ";
    int n{0};
    std::cin >> n;

    nums.push_back(n);

    for(int i = 0; i < nums.size(); i++)
    {
        std::cout << nums.at(i) << " ";
    }
}
