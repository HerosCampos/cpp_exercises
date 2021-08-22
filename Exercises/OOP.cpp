#include <iostream>
#include <vector>
#include <string>


class Employee
{
public:
    std::string name;
    std::string company;
    int age;

    void introduce_yourself()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Company: " << company << std::endl;
    }
};



int main()
{
    Employee frank;
    frank.name = "Frank";
    frank.age = 61;
    frank.company = "ASDF";
    frank.introduce_yourself();
}