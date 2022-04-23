#include <iostream>
#include <vector>


int main()
{
    std::vector<int> nums{};

    while(true)
    {
        std::cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n\nEnter your choice: ";
        char opt;
        std::cin >> opt;

        if(opt == 'P' || opt == 'p') {
            if(nums.size() > 0) {
                std::cout << "The numbers in the list are: ";
                for(int num: nums) {
                    std::cout << num << " ";
                }
                std::cout << "\n" << std::endl;
            } else {
                std::cout << "[] - the list is empty\n" << std::endl;
            }
        } else if(opt == 'A' || opt == 'a') {
            std::cout << "Enter the number that you want to add to the list: ";
            int numToAdd{};
            std::cin >> numToAdd;
            nums.push_back(numToAdd);
            std::cout << numToAdd << " added.\n" << std::endl;
        } else if(opt == 'M' || opt == 'm') {
            double sum{};
            for(auto n: nums) {
                sum += n;
            }
            std::cout << "The mean of the list is: " << sum / nums.size() << "\n" << std::endl;
        } else if(opt == 'S' || opt == 's') {
            int smallest_number{};
            for(int i{0}; i < nums.size(); i++) {
                if(i == 0) {
                    smallest_number = nums[i];
                } else {
                    if(nums[i] < smallest_number) {
                        smallest_number = nums[i];
                    }
                }
            }
            std::cout << "The smallest number is: " << smallest_number << "\n" << std::endl;
        } else if(opt == 'L' || opt == 'l') {
            int largest_number{};
            for(int i{0}; i < nums.size(); i++) {
                if(i == 0) {
                    largest_number = nums[i];
                } else {
                    if(nums[i] > largest_number) {
                        largest_number = nums[i];
                    }
                }
            }
            std::cout << "The largest number is: " << largest_number << "\n" << std::endl;
        } else if(opt == 'Q' || opt == 'q') {
            break;
        } else {
            std::cout << "\nNot a valid option, try again...\n" << std::endl;
        }   
    }
}
