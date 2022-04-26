#include <iostream>
#include <vector>
#include <string>

int main()
{
    double peso{};
    double maior{};
    double menor{};

    for(int i{}; i < 5; i++) {
        std::cout << "Peso da " << i + 1 << " pessoa: ";
        std::cin >> peso;

        if(i == 0) {
            maior = peso;
            menor = peso;
        } else {
            if(peso > maior) {
                maior = peso;
            } else if(peso < menor) {
                menor = peso;
            }
        }
    }
    std::cout << "O maior peso e: " << maior << std::endl;
    std::cout << "O menor peso e: " << menor << std::endl;
}
