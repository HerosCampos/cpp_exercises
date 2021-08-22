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
        std::cout << "====================" << std::endl;
    }


    Employee(std::string name_val = "No name", std::string company_val = "No company", int age_val = 0);
    Employee(const Employee &source);
    ~Employee()
};


Employee::Employee(std::string name_val, std::string company_val, int age_val)
    :name{name_val}, company{company_val}, age{age_val} {
}

// Employee::Employee(const Employee &source)
//     :name{source.name}, age{source.age}, company{source.company} {
// }

Employee::Employee(const Employee &source)
    :Employee{source.name, source.company, source.age} {
}




int main()
{
    Employee frank;
    frank.name = "Frank";
    frank.age = 61;
    frank.company = "ASDF";
    frank.introduce_yourself();

    Employee james;
    james.name = "James";
    james.age = 77;
    james.company = "FDSA";
    james.introduce_yourself();
}