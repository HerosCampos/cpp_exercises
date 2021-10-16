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
    std::string company;
    int age;

protected:
    std::string name;

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


// ---------------------------------------------------------------------------------------


class Developer:public Employee
{
private:
    std::string Favorite_Prog_Language;

public:
    std::string get_favProgLang() {return Favorite_Prog_Language;}
    void set_favProgLang(std::string Favorite_Prog_Language_var) {Favorite_Prog_Language = Favorite_Prog_Language_var;}

    Developer(std::string name_var = "no name", std::string company_var = "no company", int age_var = 0, std::string Favorite_Prog_Language_var = "no language");

    void devFunction();
};


Developer::Developer(std::string name_var, std::string company_var, int age_var, std::string Favorite_Prog_Language_var)
    :Employee(name_var, company_var, age_var)
    {
        Favorite_Prog_Language = Favorite_Prog_Language_var;
    }


void Developer::devFunction()
{
    std::cout << name << " writes codes using " << Favorite_Prog_Language << std::endl;
}

// --------------------------------------------------------------------------------------


int main()
{
    // Employee employee1;
    // employee1.set_name("James");
    // employee1.set_company("Microsoft");
    // employee1.set_age(56);

    // std::cout << employee1.get_name() << std::endl;
    // std::cout << employee1.get_company() << std::endl;
    // std::cout << employee1.get_age() << std::endl;

    // employee1.greeting();

    // Employee employee2("Sarah", "Youtube", 25);
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    Developer employee3("Frank", "Google", 47, "Java");
    employee3.devFunction();
}
