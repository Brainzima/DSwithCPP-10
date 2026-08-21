#include <iostream>
#include <stack>
using namespace std;
int main(){
    
    // stack<string> bori = {"atta","rice"};     //won't work
    stack<string> bori;     
    
    bori.push("Atta");
    bori.push("Rice");
    bori.push("Makka");
   
   
    
    // std::cout << bori[0] << std::endl;   //won't work
    
    // std::cout << bori.top() << std::endl;
    // bori.pop();
    // std::cout << bori.top() << std::endl;
    // bori.pop();
    // std::cout << bori.top() << std::endl;
    // bori.pop();
    // std::cout << bori.empty() << std::endl;
    
    // std::cout << bori.size() << std::endl;
    
    for (int i = 0; i <= bori.size()+1; i++) {
        std::cout << bori.top() << std::endl;
        bori.pop();
    }
    
    
    
   
    
    
    
    return 0;
}