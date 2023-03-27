#include <stdio.h>


int main()
{
    double price[] = {5.0, 10.0, 14.0, 25.0, 20.0, 35.0};
    
    // printf("$%.2lf", price[0]);
    for(unsigned int i = 0; i < sizeof(price) / sizeof(price[0]); i++)
    {
        printf("%.2lf\n", price[i]);
    }
}
