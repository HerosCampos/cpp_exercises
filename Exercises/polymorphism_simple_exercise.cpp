#include <iostream>
#include <vector>
#include <string>


class Base
{
public:
    void say_hello() const
    {
        std::cout << "Hi, I'm a Base class object!" << std::endl;
    }
};


class Derived: public Base
{
public:
    void say_hello() const
    {
        std::cout << "Hi, I'm a Derived class object!" << std::endl;
    }
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
    std::cout << std::endl;
}


int main()
{
    Base b;
    b.say_hello();

    greetings(b);


    Derived d;
    d.say_hello();

    greetings(d);
}