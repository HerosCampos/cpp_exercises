#include <iostream>
#include <vector>


int solution(int N) 
{
    const short numBits = sizeof(N) * 8;

    bool countZero = false;
    int gapLength = 0;
    int biggestGap = 0;

    for(int b = 0; b < numBits; ++b)
    {
        if((N >> b) & 1) 
        {
            countZero = true;

            if(gapLength > biggestGap)
            {
                biggestGap = gapLength;
            }
            gapLength = 0;
        }
        else if(countZero)
        {
            ++gapLength;
        }
    }

    return biggestGap;
}


int main()
{
    solution(3);
}

