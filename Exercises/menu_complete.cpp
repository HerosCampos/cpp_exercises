#include <iostream>
#include <vector>
#include <algorithm>


void add_number(std::vector<double> &vec_double)
{
    std::cout << "Enter a number that you want to add to the list: ";
    double v{};
    std::cin >> v;

    if(std::count(vec_double.begin(), vec_double.end(), v)) {
        std::cout << "The value is already in the list!" << std::endl;
    }
    else {
        vec_double.push_back(v);
        std::cout << v << " successfully added!" << std::endl;
    }
}

void multiply_numbers(std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "The list is empty!" << std::endl;
    }
    else {
        std::cout << "Enter a number to multiply the numbers in the list: ";
        double number_to_multiply{};
        std::cin >> number_to_multiply;

        for(unsigned int i{0}; i < vec_double.size(); ++i) {
            vec_double[i] = vec_double[i] * number_to_multiply;
        }
    }
}

void divide_numbers(std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "The list is empty!" << std::endl;
    }
    else {
        std::cout << "Enter a number to divide the numbers in the list: ";
        double number_to_divide{};
        std::cin >> number_to_divide;

        for(unsigned int i{0}; i < vec_double.size(); ++i) {
            vec_double[i] = vec_double[i] / number_to_divide;
        }
    }
}

void delete_number(std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "The list is empty, no numbers to delete!" << std::endl;
    }
    else {
        std::cout << "Enter a number that you want to delete: ";
        double number_to_delete{};
        std::cin >> number_to_delete;

        for(unsigned int i{0}; i < vec_double.size(); ++i) {
            if(vec_double[i] == number_to_delete) {
                vec_double.erase(vec_double.begin() + i);
            }
        }
    }
}

void show_numbers(const std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "No numbers to display - the list is empty!" << std::endl;
    }
    else {
        std::cout << "[ ";
        for(auto i: vec_double) {
            std::cout << i << " ";
        }
        std::cout << "]" << std::endl;
    }
}

void sum_and_mean(const std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "There are no numbers in the list!" << std::endl;
    }
    else {
        double sum_vec{};
        for(auto i: vec_double) {
            sum_vec += i;
        }
        std::cout << "The sum of the numbers in the vector: " << sum_vec << std::endl;
        std::cout << "The mean of the numbers in the vector: " << sum_vec / vec_double.size() << std::endl;
    }
}

void smallest_and_biggest(const std::vector<double> &vec_double)
{
    if(vec_double.size() == 0) {
        std::cout << "There are no numbers in the list!" << std::endl;
    }
    else {
        double biggest{}, smallest{};
        for(unsigned int i{0}; i < vec_double.size(); ++i) {
            if(i == 0) {
                biggest = vec_double[i];
                smallest = vec_double[i];
            }
            else {
                if(vec_double[i] > biggest) {
                    biggest = vec_double[i];
                }
                if(vec_double[i] < smallest) {
                    smallest = vec_double[i];
                }
            }
        }
        std::cout << "The biggest number in the vector is: " << biggest << std::endl;
        std::cout << "The smallest number in the vector is: " << smallest << std::endl;
    }
}

int menu()
{
    std::cout << "\n1 - to add a number" << std::endl;
    std::cout << "2 - to multiply the numbers in the vector by a number of your coice" << std::endl;
    std::cout << "3 - to divide the numbers in the vectorn by a number of your coice" << std::endl;
    std::cout << "4 - to delete a number" << std::endl;
    std::cout << "5 - to clear the vector" << std::endl;
    std::cout << "6 - to show the vector" << std::endl;
    std::cout << "7 - the sum and the mean of the numbers in the vector" << std::endl;
    std::cout << "8 - the biggest and the smallest numbers in the vector" << std::endl;
    std::cout << "9 - to exit\n" << std::endl;
    std::cout << " ----- Your choice: ";

    int opti{};
    std::cin >> opti;

    return opti;
}


int main()
{
    std::vector<double> vec_double{};

    while(true) {
        int opt{};
        opt = menu();

        if(opt == 1) {
            add_number(vec_double);
        }
        else if(opt == 2) {
            multiply_numbers(vec_double);
        }
        else if(opt == 3) {
            divide_numbers(vec_double);
        }
        else if(opt == 4) {
            delete_number(vec_double);
        }
        else if(opt == 5) {
            std::cout << "The list is empty!" << std::endl;
            vec_double.clear();
        }
        else if(opt == 6) {
            show_numbers(vec_double);
        }
        else if(opt == 7) {
            sum_and_mean(vec_double);
        }
        else if(opt == 8) {
            smallest_and_biggest(vec_double);
        }
        else if(opt == 9) {
            break;
        }
        else {
            std::cout << "Wrong option, try again..." << std::endl;
        }
    }
}
