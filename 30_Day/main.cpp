#include <iostream>

int main()
{
    int arr1[2][3]={
        {52,41,56},
        {23,34,52}
    };
    int arr2[2][3]={
        {43,65,78},
        {23,43,45}
    };
    
    int mergedArr[4][3];
    
    std::cout << "Pehla Array:" << std::endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            std::cout << "|"<< arr1[i][j] << "|";
            mergedArr[i][j]=arr1[i][j];
        }
        std::cout << std::endl;
    }
    
    std::cout << "Dusra Array:" << std::endl;
    for(int j=0;j<2;j++){
        for(int i=0;i<3;i++){
            std::cout << "|"<< arr2[j][i] << "|";
            mergedArr[j+2][i]=arr2[j][i];
        }
        std::cout << std::endl;
    }

    std::cout << "Merger Array of Both:" << std::endl;
    for(int k=0;k<4;k++){
        for(int i=0;i<3;i++){
            std::cout << "|"<< mergedArr[k][i] << "|";
        }
        std::cout << std::endl;
    }
    return 0;
}