#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::cout << "Entre com o raio do círculo: ";
    int num;
    std::cin >> num;

    double area;
    area = 3.14159 * (num * num);

    std::cout << "A área do círculo é: " << area << std::endl;
}
