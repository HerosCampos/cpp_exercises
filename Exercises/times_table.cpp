#include <iostream>
#include <string>
#include <vector>


int main()
{
    while(true)
    {
        std::cout << "Digite um número para ver sua tabuada: (0 para sair) ";
        int num;
        std::cin >> num;

        if(num != 0)
        {
            for(int i = 1; i <= 10; i++)
            {
                std::cout << num << " x " << i << " = " << num * i << std::endl;
            }
        }
        else
        {
            std::cout << "Obrigado!" << std::endl;
            break;
        }
    }
}
