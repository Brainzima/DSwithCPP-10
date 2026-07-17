#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // ifstream myFile("about.txt");
    // string myText;
    // if(myFile.is_open()){
    //     getline(myFile, myText);
    //     std::cout << myText << std::endl;
    // }else{
    //     std::cout << "File not exist!" << std::endl;
    // }
    
    std::cout << "Enter the file name with extension(ex: .txt .html etc..): ";
    string filename;
    std::cin >> filename;
    
    fstream myFile(filename);
    if(myFile.is_open()){
        std::cout << "file exists" << std::endl;
    }else{
        std::cout << "File not exist!" << std::endl;
        std::cout << "I am creating it." << std::endl;
        ofstream myFile(filename);
    }
    
    
    return 0;
}