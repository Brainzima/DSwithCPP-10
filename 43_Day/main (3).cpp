/*
The Core File Stream Classes
std::ofstream: Stream class used to create and write information to files.
std::ifstream: Stream class used to read information from files.
std::fstream: Stream class capable of both reading and writing
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // Creating new file 
    // ofstream myFile("about.txt");
    // if(myFile){
    //     std::cout << "File Created Successfully!" << std::endl;
    // }
    // writing in the file 
    // myFile << "Testing first time";
    
    
    //reading single line of the file 
    // ifstream myFile("about.txt");
    // string myText;
    // getline(myFile, myText);
    // std::cout << myText << std::endl;
    
    // reading multiple lines of the file 
    ifstream myFile("about.txt");
    string myText;
    while(getline(myFile, myText)){
        std::cout << myText << std::endl;
    }
    
    return 0;
}