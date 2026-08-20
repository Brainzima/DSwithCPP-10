/*
list is almost similar to Vector like stores multiple elements in array pattern with dynamic size to increase or decrease itself accorinding to data but with some major differences that are vector's element can be accesssed with random index number but in list it can't and 
*/

#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main()
{
    list<string> name = {"Ramesh","Suresh","Mukesh","Mahesh"};
    vector<string> names = {"Ramesh","Suresh","Mukesh","Mahesh"};
    
    // std::cout << name << std::endl;
    // std::cout << names << std::endl;
    
    // for (auto n : name) {
    //     std::cout << n << std::endl;
    // }
    
    // for (auto n : names) {
    //     std::cout << n << std::endl;
    // }    
    
    // std::cout << names[0] << std::endl;   // will work
    
    // std::cout << name[0] << std::endl;     // won't work 
    
    std::cout << name.front() << std::endl;
    std::cout << name.back() << std::endl;
    
    name.push_front("Alfaz");
    std::cout << name.front() << std::endl;
    name.push_back("Altaf");
    std::cout << name.back() << std::endl;
    
    // std::cout << names.at(2) << std::endl;
    // std::cout << name.at(2) << std::endl;
    
    name.pop_front();
    std::cout << name.front() << std::endl;
    name.pop_back();
    std::cout << name.back() << std::endl;
std::cout << "*********************" << std::endl;
    names.insert(names.begin()+3, "Jitesh");
    for (auto i : names) {
        std::cout << i << std::endl;
    }
    
    
    
    return 0;
}