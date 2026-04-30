// Array में even और odd numbers की count करें, दोनों को separate arrays में store करें।

#include <iostream>

int main(){
    
    int sNum;
    int eNum;
    
    std::cout << "Enter the starting number :";
    std::cin >> sNum;
    std::cout << "Enter the ending number :";
    std::cin >> eNum;
    
    //generate array
    int alength= (eNum-sNum)+1;
    int rangeArray[alength];
    
    for(int i=0; i<alength; i++){
        rangeArray[i] = sNum++;
    }
    
    // int oddArray[alength];
    // int evenArray[alength];
    // for(int k=0; k<alength; k++){
    //     if(rangeArray[k] % 2 == 0){
    //         evenArray[k] = rangeArray[k];
    //     }else{
    //         oddArray[k] = rangeArray[k];
    //     }
    // }
   
    // std::cout << "Even numbers:";
    // for(int j=0; j<alength;j++){
    //     std::cout << evenArray[j] << ", ";
    // }
    
    // std::cout << "\nOdd numbers:";
    // for(int l=0; l<alength;l++){
    //     std::cout << oddArray[l] << ", ";
    // }
    
    
    //good approach
    
    int totalEven=0;
    int totalOdd=0;
    
    for(int k=0; k<alength; k++){
        if(rangeArray[k] % 2 == 0){
            totalEven++;
        }else{
            totalOdd++;
        }
    }
    
    std::cout << "Total Even Numbers: " << totalEven << std::endl;
    std::cout << "Total Odd Numbers: " << totalOdd << std::endl;
    
    int evenArray[totalEven];
    int oddArray[totalOdd];
    int ehelper=0;
    int ohelper=0;
    for(int e=0; e<alength; e++){
        if(rangeArray[e] % 2 == 0){
            evenArray[ehelper] = rangeArray[e];
            ehelper++;
        }else{
            oddArray[ohelper] = rangeArray[e];
            ohelper++;
        }
    }
    
    for(int ev:evenArray){
        std::cout << ev << std::endl;
    }
    for(int od:oddArray){
        std::cout << od << std::endl;
    }
}