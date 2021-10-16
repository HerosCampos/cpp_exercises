#include <iostream>
#include <vector>
#include <string>


class Employee
{
public:
    std::string name;
    std::string company;
    int age;

    void greeting()
    {
        std::cout << "Hello, my name is " << name << " I am " << age << " years old and I work for " << company << std::endl;
    }
};


int main()
{
    Employee James;
    James.name = "James";
    James.company = "Microsoft";
    James.age = 56;

    std::cout << James.name << std::endl;
    std::cout << James.company << std::endl;
    std::cout << James.age << std::endl;

    James.greeting();
}
