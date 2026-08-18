#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<string> name = {"Rajesh", "Mukesh", "Sukesh"};
    
    // traditional old loop 
    // for (int i = 0; i < name.size(); i++) {
    //     std::cout << name[i] << std::endl;
    // }
    
    // foreach loop
    for (string n : name) {
        std::cout << n << ",";
    }
    
    name.push_back("Rajik");  // push_back() adds the elements in the last position of the array
    name.push_back("Rohan");
    name.push_back("Sohan");
    std::cout << std::endl;
    for (string n : name) {
        std::cout << n << ",";
    }
    
    name.pop_back();   // pop_back() removes the elements in the last position of the array
    std::cout << std::endl;
    for (string n : name) {
        std::cout << n << ",";
    }
    
    name.insert(name.begin() + 3, "Kumesh");
    std::cout << std::endl;
    for (string n : name) {
        std::cout << n << ",";
    }
    
    name.clear();
    std::cout << std::endl;
    
    if(name.empty()){
        std::cout << "No Data in array!" << std::endl;
    }else{
        for (string n : name) {
        std::cout << n << ",";
        }
    }
    
    
    
    
    
    
    return 0;
    
}