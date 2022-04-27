#include <iostream>
#include <vector>
#include <string>

int main()
{
    double soma{};
    double homem_idade{};
    std::string homem_nome{};
    int mulher_sub20{};

    std::string nome;
    double idade;
    char sexo;

    for(int i{}; i < 5; i++) {
        std::cout << "----- " << i + 1 << " PESSOA -----" << std::endl;

        std::cout << "Nome: ";
        std::cin >> nome;

        std::cout << "Idade: ";
        std::cin >> idade;

        std::cout << "Sexo [M/F]: ";
        std::cin >> sexo;

        soma += idade;
        if(sexo == 'M' || sexo == 'm') {
            if(idade > homem_idade) {
                homem_idade = idade;
                homem_nome = nome;
            }
        }
        if(sexo == 'F' || sexo == 'f') {
            if(idade < 20) {
                mulher_sub20 += 1;
            }
        }
    }

    std::cout << "A media de idade do grupo e: " << soma / 5 << std::endl;
    std::cout << "O homem mais velho tem " << homem_idade << " anos e se chama " << homem_nome << std::endl;
    std::cout << "Ao todo temos " << mulher_sub20 << " mulheres com menos de 20 anos";
}
