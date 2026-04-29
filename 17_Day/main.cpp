#include <iostream>

int main()
{
    int sNum;
    int eNum;
    
    std::cout << "Enter the starting number :";
    std::cin >> sNum;
    std::cout << "Enter the ending number :";
    std::cin >> eNum;
    
    //generate array
    int alength= (eNum-sNum)+1;
    int rangeArray[alength];
    // std::cout << alength << std::endl;
    for(int i=0; i<alength; i++){
        rangeArray[i] = sNum++;
    }
    
    // print the array
    for(int p:rangeArray){
        std::cout << p << ", ";
    }
    
    // for(int k=0; k<alength;k++){
    //     std::cout << k << " : " << rangeArray[k] << std::endl;
    // }
    
    return 0;
}