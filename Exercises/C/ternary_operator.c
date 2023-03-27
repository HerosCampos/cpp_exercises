#include <stdio.h>


int findMax(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int findMax2(int x, int y)
{
    return (x > y) ? x : y;
}


int main()
{
    int max = findMax(3, 4);

    printf("%d", max);

    printf("\n");

    int max2 = findMax2(9, 2);

    printf("%d", max2);

    
}