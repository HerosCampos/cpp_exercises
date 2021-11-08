#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::cout << "Enter the login that you want: ";
    std::string login;
    std::cin >> login;

    std::string email = login.append("@gmail.com");
    std::cout << "Your e-mail is: " << email << std::endl;
}
