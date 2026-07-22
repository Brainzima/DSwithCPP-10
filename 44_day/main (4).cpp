#include <iostream>
#include <fstream>
using namespace std;

int main() 
{

    std::cout << "Enter the file name: ";
    string filename;
    std::cin >> filename;
    
    filename = filename + ".txt";
    
    fstream myFile(filename);
    if(myFile.is_open()){
        std::cout << "Filname already exists!" << std::endl;
    }else{
        std::cout << "Enter Content of File: ";
        string contents;
        std::cin >> contents;
        getline(cin, contents);
        // std::cout << contents << std::endl;
        
        ofstream myFile(filename);
        myFile << contents;
        std::cout << "File Created!" << std::endl;
            
    }
    
    
    return 0;
}