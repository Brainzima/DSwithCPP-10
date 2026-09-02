#include <iostream>
using namespace std;

int main()
{
    string word = "mam";
    
    // for (int i = 0; i < word.size(); i++) {
    //     std::cout << word[i] << std::endl;
    // }
    
    string word2;
    for (int i = word.size()-1; i >= 0; i--) {
        // std::cout << word[i] << std::endl;
        word2 += word[i];
    }
    
    // std::cout << word2 << std::endl;
    
    if(word==word2){
        std::cout << word << " is a palindrome word." << std::endl;
    }else{
        std::cout << word << " is not a palindrome word." << std::endl;
        
    }

    return 0;
}