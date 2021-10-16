#include <iostream>
#include <vector>
#include <string>


class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};


class Employee: AbstractEmployee
{
private:
    std::string name;
    std::string company;
    int age;

public:
    std::string get_name() {return name;}
    std::string get_company() {return company;}
    int get_age() {return age;}

    void set_name(std::string name_var) {name = name_var;}
    void set_company(std::string company_var) {company = company_var;}
    void set_age(int age_var) {age = age_var;}

    // Constructor
    Employee(std::string name_var = "no name", std::string company_var = "no company", int age_var = 0);
    // Copy constructor
    Employee(const Employee &source);
    // Destructor
    ~Employee()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    }

    void greeting()
    {
        std::cout << "Hello, my name is " << name << " I am " << age << " years old and I work for " << company << std::endl;
    }

    void AskForPromotion()
    {
        if(age > 30)
        {
            std::cout << name << " got promoted!" << std::endl;
        }
        else
        {
            std::cout << name << ", sorry, no promotion for you!" << std::endl;
        }
    }
};

Employee::Employee(std::string name_var, std::string company_var, int age_var)
    :name{name_var}, company{company_var}, age{age_var} {
        std::cout << "Constructor called for: " << name << std::endl;
}

Employee::Employee(const Employee &source)
    :Employee(source.name, source.company, source.age) {
        std::cout << "Copy constructor called for: " << source.name << std::endl;
}


int main()
{
    Employee James;
    James.set_name("James");
    James.set_company("Microsoft");
    James.set_age(56);

    // std::cout << James.get_name() << std::endl;
    // std::cout << James.get_company() << std::endl;
    // std::cout << James.get_age() << std::endl;

    // James.greeting();

    Employee Sarah("Sarah", "Youtube", 25);
    James.AskForPromotion();
    Sarah.AskForPromotion();

}
