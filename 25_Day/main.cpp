#include <iostream>

int main()
{
   int myMatrix[4][5] = {
        {41,85,85,56,80},
        {78,45,44,75,75},
        {7,8,9,10,11},
        {12,13,14,11,11}
    };
    
    int row = sizeof(myMatrix)/sizeof(myMatrix[0]);
    int col = sizeof(myMatrix[0])/sizeof(myMatrix[0][0]);
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            std::cout << " | " << myMatrix[i][j] << " | ";
        }
        std::cout << std::endl;
    }
    
    // approach 1
    // for(int j=0; j<row; j++){
    //     for(int i=0; i<col; i++){
    //         if(myMatrix[j][i]==myMatrix[j][i+1] or myMatrix[j][i]==myMatrix[j][i+2] or myMatrix[j][i]==myMatrix[j][i+3]){
    //             std::cout << "Matched" << std::endl;
    //             // std::cout << myMatrix[j][i] << "=" << myMatrix[j][i+1] << std::endl;
    //         }
    //     }
    // }
    
    // approach 2
    for(int j=0; j<row; j++){
        for(int i=0; i<col; i++){
            if(myMatrix[j][i]==myMatrix[j][i+1]){
                std::cout << "Duplicate Matched" << ":";
                std::cout << myMatrix[j][i] << "=" << myMatrix[j][i+1] << std::endl;
            }
            if(myMatrix[j][i]==myMatrix[j][i+2]){
                std::cout << "Duplicate Matched" << ":";
                std::cout << myMatrix[j][i] << "=" << myMatrix[j][i+2] << std::endl;
            }
            if(myMatrix[j][i]==myMatrix[j][i+3]){
                std::cout << "Duplicate Matched" << ":";
                std::cout << myMatrix[j][i] << "=" << myMatrix[j][i+3] << std::endl;
            }
        }
    }

    return 0;
}



