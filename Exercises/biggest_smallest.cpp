#include <iostream>
#include <vector>
#include <string>

int main()
{
    int num{}, count{}, summ{}, biggest{}, smallest{};
    char cont{};

    while(cont != 'n')
    {
        std::cout << "Digite um número: ";
        std::cin >> num;

        count++;
        summ += num;

        if(count == 0) 
        {
            biggest = num;
            smallest = num;
        }
        else
        {
            if(num > biggest)
            {
                biggest = num;
            }
            if(num < smallest)
            {
                smallest = num;
            }
        }

        std::cout << "Deseja continuar? [S/N]";
        std::cin >> cont;
    }

    std::cout << "Voce digitou " << count << " numeros e a media foi " << (double)summ / count << std::endl;
    std::cout << "O maior valor digitado foi " << biggest << " e o menor valor digitado foi " << smallest;
}
