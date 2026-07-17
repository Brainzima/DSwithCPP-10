#include <iostream>
#include <fstream>
using namespace std;

int main() 
{

    std::cout << "Enter the file name with extension(ex: .txt .html etc..): ";
    string filename;
    std::cin >> filename;
    
    fstream myFile(filename);
    if(myFile.is_open()){
        std::cout << "file exists" << std::endl;
    }else{
        std::cout << "File not exist!" << std::endl;
        std::cout << "Would you like me to create it? (Yes/No) : ";
        string ans;
        std::cin >> ans;
        if(ans == "Yes"){
            std::cout << "Ok Boss I am creating....." << std::endl;
            std::cout << ".........................." << std::endl;
            ofstream myFile(filename);
            std::cout << "I am Done. Created the file." << std::endl;
        }else{
            std::cout << "Thank You!" << std::endl;
        }
        
    }
    
    
    return 0;
}