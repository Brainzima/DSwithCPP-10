/******************************************************************************
Write a program to find all the numbers which divisible by 9 from 100 to 200.
*******************************************************************************/
#include <iostream>
int main()
{
    // if(100 % 9 == 0){
    //     std::cout << "100 is divisible by 9";
    // }else{
    //     std::cout << "100 is not divisible by 9";
    // }
    
    for(int i=100; i <= 200; i++){
        if(i % 3 == 0){
            std::cout << i << ", ";
        }
    }

    return 0;
}