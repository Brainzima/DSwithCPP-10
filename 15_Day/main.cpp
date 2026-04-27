#include <iostream>

int main()
{
    int totalNum;
    int divider;
    int numbers[50];
    
    std::cout << "How many numbers you want to add:";
    std::cin >> totalNum;
    for(int i=1; i<=totalNum; i++){
        std::cout << "Number" << i << ":";
        std::cin >> numbers[i];
    }
    std::cout << "Enter Divider: ";
    std::cin >> divider;
    
    // int lenOfArray = sizeof(numbers)/sizeof(numbers[0]);
    // for(int j=0; j<lenOfArray; j++){
    //     std::cout << "Number in " << j << ":" << numbers[j] << std::endl;
    // }
    
    
    // for(int j=1; j<=totalNum; j++){
    //     if(numbers[j] % divider == 0){
    //         std::cout << "Number in " << j << " : " << numbers[j] << " - Divisible" << std::endl;
    //     }else{
    //         std::cout << "Number in " << j << " : " << numbers[j] << " - NotDivisible" << std::endl;
    //     }
    // }
    
    for(int j=1; j<=totalNum; j++){
        if(numbers[j] % divider == 0){
            std::cout << numbers[j] << " is Divisible by " << divider << std::endl;
        }else{
            std::cout << numbers[j] << " is Not Divisible by " << divider << std::endl;
            
        }
    }
    
    
    // std::cout << sizeof(numbers) << std::endl;
    // std::cout << sizeof(numbers[0]) << std::endl;
    // std::cout << sizeof(numbers)/sizeof(numbers[0]) << std::endl;

    return 0;
}