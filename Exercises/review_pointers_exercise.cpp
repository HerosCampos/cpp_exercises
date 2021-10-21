#include <iostream>
#include <vector>
#include <string>


int get_min(int num[], int size)
{
    int min = 0;
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            min = num[i];
        }
        else
        {
            if(num[i] < min)
            {
                min = num[i];
            }
        }
    }
    return min;
}


int get_max(int num[], int size)
{
    int max = 0;
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            max = num[i];
        }
        else
        {
            if(num[i] > max)
            {
                max = num[i];
            }
        }
    }
    return max;
}


void get_min_and_max(int num[], int size, int *min, int *max)
{
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            *max = num[i];
        }
        else
        {
            if(num[i] > *max)
            {
                *max = num[i];
            }
            else if (num[i] < *min)
            {
                *min = num[i];
            }
            
        }
    }
}


int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    // std::cout << get_min(numbers, 5) << std::endl; 
    // std::cout << get_max(numbers, 5) << std::endl; 

    int min = 0;
    int max = 0;
    get_min_and_max(numbers, 5, &min, &max);
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
}
