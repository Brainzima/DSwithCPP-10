#include <iostream>

int main()
{
   int myMatrix[5][6] = {
        {41,52,85,63,89,60},
        {78,89,78,45,78,45},
        {85,41,52,63,78,85},
        {85,41,52,63,56,23},
        {85,41,52,63,56,23}
    };
    
    // size of complete array
    // std::cout << sizeof(myMatrix) << std::endl;
    
    //size of one row
    // std::cout << sizeof(myMatrix[0]) << std::endl;
    
    //size of one array col digit
    // std::cout << sizeof(myMatrix[0][0]) << std::endl;
    
    // exact length of rows in array
    // std::cout << sizeof(myMatrix)/sizeof(myMatrix[0]) << std::endl;
    
    // exact length of columns in one row
    // std::cout << sizeof(myMatrix[0])/sizeof(myMatrix[0][0]) << std::endl;
    
    
    int row = sizeof(myMatrix)/sizeof(myMatrix[0]);
    int col = sizeof(myMatrix[0])/sizeof(myMatrix[0][0]);
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            std::cout << " | " << myMatrix[i][j] << " | ";
        }
        std::cout << std::endl;
    }
    

    return 0;
}













