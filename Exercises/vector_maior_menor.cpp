#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> nums{};
    int num{};

    for(int i{}; i < 5; i++)
    {
        std::cout << "Digite um valor para a posicao " << i << ": ";
        std::cin >> num;
        nums.push_back(num);
    }

    std::cout << "Voce digitou os valores [ ";
    for(int i: nums)
    {
        std::cout << i << " ";
    }
    std::cout << " ]" << std::endl;


    int maior{};
    int menor{};

    for(int i{}; i < nums.size(); i++)
    {
        if(i == 0)
        {
            maior = nums[i];
            menor = nums[i];
        }
        else
        {
            if(nums[i] > maior)
            {
                maior = nums[i];
            }
            if(nums[i] < menor)
            {
                menor = nums[i];
            }
        }
    }
    std::cout << "O maior valor digitado e: " << maior << ". Nas posicoes " << std::endl;
    for(int i{}; i < nums.size(); i++)
    {
        if(nums[i] == maior)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\nO menor valor digitado e: " << menor << ". Nas posicoes " << std::endl;
    for(int i{}; i < nums.size(); i++)
    {
        if(nums[i] == menor)
        {
            std::cout << i << " ";
        }
    }
}
