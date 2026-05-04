/*
Array 
1D Array Dimension
2D/MultiD Dimension

Array[row][col] = {{col},{col}}

Array[3][4] = {
    {41,52,85,63},
    {78,89,78,45},
    {85,41,52,63}
}
*/

#include <iostream>

int main()
{
   int myMatrix[3][4] = {
        {41,52,85,63},
        {78,89,78,45},
        {85,41,52,63}
    };
    
    // std::cout << myMatrix[1][3] << std::endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            std::cout << " | " << myMatrix[i][j] << " | ";
        }
        std::cout << std::endl;
    }
    
    //
    std::cout << sizeof(myMatrix)/4 << std::endl;

    return 0;
}














