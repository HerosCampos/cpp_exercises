#include <iostream>
#include <string>
#include <vector>


void test(std::string value)
{
    std::cout << "Adress: " << &value << std::endl;
    std::cout << "Size: " << value.length() << std::endl;
}


void testPtr(std::string *value)
{
    std::cout << "Adress: " << value << std::endl;
    std::cout << "Size: " << (*value).length() << std::endl; // or I could just use value->length()
}


int main()
{
    std::string name = "Frank";

    std::cout << "Adress: " << &name << std::endl;
    std::cout << "Size: " << name.length() << std::endl;

    test("Frank");
    testPtr(&name);
}