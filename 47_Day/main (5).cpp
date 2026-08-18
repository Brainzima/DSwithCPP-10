#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> question = {"1. CPU?","2.UPS?", "3.SMPS", "4.RAM", "5.ROM", "6.MU", "7.CU", "8.ALU"};
    vector<string> answer = {"Central Processing Unit", "Uninterrupted power supply", "Switch Mode Power Supply", "Random Access Memory", "Read Only Memory", "Memory Unit", "Control Unit", "Arithmatic Logical Unit"};
    
    int mark=0;
    
    // std::cout << question[0] << std::endl;
    // string ans;
    // std::cout << "Answer: ";
    // // std::cin >> ans;
    // getline(cin, ans);
    
    // // if(answer[0] == "Central Processing Unit"){
    // if(answer[0] == ans){
    //     std::cout << "Correct!" << std::endl;
    // }else{
    //     std::cout << "Incorrect!" << std::endl;
    // }
    
    
    for (int i = 0; i < question.size(); i++) {
        std::cout << question[i] << std::endl;
        string ans;
        std::cout << "Answer: ";
        getline(cin, ans);
        
        if(answer[i] == ans){
            std::cout << "Correct!" << std::endl;
            mark += 1;
        }else{
            std::cout << "Incorrect!" << std::endl;
            std::cout << "Correct answer:" << answer[i] << std::endl;
        }
        std::cout << "-----------------------------" << std::endl;
    }
    std::cout << "**************************" << std::endl;
    std::cout << "Your Total Score: " << mark << std::endl;
   
}