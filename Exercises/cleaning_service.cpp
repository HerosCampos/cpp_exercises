#include <iostream>

int main()
{
    std::cout << "Welcome to Carpet Cleaning Service" << std::endl;

    std::cout << "How many rooms would you like cleaned? ";
    int number_of_rooms{0};
    std::cin >> number_of_rooms;

    int price_per_room{30};
    std::cout << "\nEstimate for carpet cleaning service: " << std::endl;
    std::cout << "Number of rooms: " << number_of_rooms << std::endl;
    std::cout << "Price per room: " << price_per_room << std::endl;
    std::cout << "Cost: $" << number_of_rooms * price_per_room << std::endl;
    std::cout << "Tax: $" << number_of_rooms * price_per_room * 0.06 <<;

    std::cout << "--------------------------" << std::endl;

    std::cout << "Total estimate: $" << (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * 0.06) << std::endl;
    std::cout << "This estimate is valid for 30 days." << std::endl;
}