#include <iostream>
#include <vector>
#include <string>

int main()
{
    int mais18{};
    int homem{}; 
    int mulher_sub20{};

    while(true)
    {
        std::cout << "Idade: ";
        int idade{};
        std::cin >> idade;

        std::cout << "Sexo [F/M]: ";
        char sexo;
        std::cin >> sexo;

        if(idade > 18)
        {
            mais18++;
        }
        if(sexo == 'm' || sexo == 'M')
        {
            homem++;
        }
        if(sexo == 'f' || sexo == 'F')
        {
            mulher_sub20++;
        }

        char continuar{};
        while(true)
        {
            std::cout << "Deseja continuar? [S/N] ";
            std::cin >> continuar;
            if(continuar == 'n' || continuar == 'N' || continuar == 's' || continuar == 'S')
            {
                break;
            }
        }
        if(continuar == 'n' || continuar == 'N')
        {
            break;
        }
    }
    std::cout << "Total de pessoas com mais de 18 anos: " << mais18 << std::endl;
    std::cout << "Ao todo temos " << homem << " homens cadastrados." << std::endl;
    std::cout << "E temos " << mulher_sub20 << " mulheres cadastradas." << std::endl;
}
