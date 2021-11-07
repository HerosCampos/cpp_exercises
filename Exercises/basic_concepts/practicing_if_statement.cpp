#include <iostream>
#include <vector>
#include <string>
#include <cmath>


int main()
{
	bool pizza;

	std::cout << "Você gosta de pizza? ";
	int resp;
	std::cin >> resp;

    pizza = resp;

    if(pizza)
    {
        std::cout << "Bem vindo ao time!" << std::endl;
    }
    else
    {
        std::cout << "Thcau!" << std::endl;
    }

}