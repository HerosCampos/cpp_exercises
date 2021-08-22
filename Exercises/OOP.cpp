#include <iostream>
#include <vector>
#include <string>


class Employee
{
private:
    std::string name;
    std::string company;
    int age;

public:
    std::string get_name() {return name;}
    std::string get_company() {return company;}
    int get_age() {return age;}

    void set_name(std::string name_val) {name = name_val;}
    void set_company(std::string company_val) {company = company_val;}
    void set_age(int age_val) {age = age_val;}

    Employee(std::string name_val = "No name", std::string company_val = "No company", int age_val = 0);
    Employee(const Employee &source);
    ~Employee()
    {
        std::cout << "Calling destructor for: " << name << std::endl;
    }
};


Employee::Employee(std::string name_val, std::string company_val, int age_val)
    :name{name_val}, company{company_val}, age{age_val} {
}

Employee::Employee(const Employee &source)
    :Employee{source.name, source.company, source.age} {
}

void introduce_yourself(Employee emp)
{
    std::cout << "Name: " << emp.get_name() << std::endl;
    std::cout << "Company: " << emp.get_company() << std::endl;
    std::cout << "Age: " << emp.get_age() << std::endl;
    std::cout << "====================" << std::endl;
}


int main()
{
    Employee frank("Frank", "ASDF", 50);
    introduce_yourself(frank);
}