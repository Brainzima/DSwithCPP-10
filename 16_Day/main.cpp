#include <iostream>

int main()
{
    int totalNum;
    int divider;
    
    std::cout << "How many numbers you want to add:";
    std::cin >> totalNum;
    
    int numbers[totalNum];
    
    for(int i=0; i<totalNum; i++){
        std::cout << "Number " << i+1 << ":";
        std::cin >> numbers[i];
    }
    
    std::cout << "Enter Divider: ";
    std::cin >> divider;
    
    
    // for(int k=0; k<totalNum; k++){
    //     std::cout << k << " : " << numbers[k] << std::endl;
    // }
    
    //foreach loop
    // for(datatype varName: Array){
    //     statement
    // }
    
    // for(int num : numbers){
    //     std::cout << num << std::endl;
    // }
    
     for(int num : numbers){
        if(num % divider == 0){
            std::cout << num << " is Divisible by " << divider << std::endl;
        }else{
            std::cout << num << " is Not Divisible by " << divider << std::endl;
            
        }
    }
    
  
    // for(int j=1; j<=totalNum; j++){
    //     if(numbers[j] % divider == 0){
    //         std::cout << numbers[j] << " is Divisible by " << divider << std::endl;
    //     }else{
    //         std::cout << numbers[j] << " is Not Divisible by " << divider << std::endl;
            
    //     }
    // }
 
    return 0;
}