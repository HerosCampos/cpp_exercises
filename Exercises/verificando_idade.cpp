// Revendo conceitos básicos

#include <iostream>

int main()
{
    std::cout << "Qual a sua idade? ";
    int number {0};
    std::cin >> number;
    
    if(number >= 16 && number < 18 || number > 65)
    {
        std::cout << "Com " << number << " anos o voto e opcional.";
    }
    else if(number >= 18 && number <= 65)
    {
        std::cout << "Com " << number << " o voto e obrigatorio.";
    }
    else
    {
        std::cout << "Com " << number << " voce nao tem idade para votar";
    }
}


