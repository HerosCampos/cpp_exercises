#include <iostream>
#include <vector>
#include <string>

// int main()
// {
//     int vSpeed = 2;
//     int vFSpeed = 0;
//     if (vSpeed < 3)
//     {

//         vFSpeed = 0;
//     }
//     else
//     {

//         vFSpeed = vSpeed;
//     }
//     std::cout << vFSpeed << std::endl;
// }

int main()
{
    int vSpeed = 2;
    int vFSpeed = (vSpeed < 3) ? 0 : vSpeed;
    std::cout << vFSpeed << std::endl;
}
