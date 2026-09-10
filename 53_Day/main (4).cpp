#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<string> names = {"Amar", "Anthony", "Tony", "Samar"};
    
    std::cout << names[0] << std::endl;
    std::cout << names.at(1) << std::endl;
    
    std::cout << names.front() << std::endl;
    std::cout << names.back() << std::endl;
    
    names.push_front("Rajik");
    std::cout << names.front() << std::endl;
    std::cout << names[0] << std::endl;

    names.push_back("Sajik");
    std::cout << names.back() << std::endl;

    names.pop_front();
    std::cout << names.front() << std::endl;
    std::cout << names[0] << std::endl;

    names.pop_back();
    std::cout << names.back() << std::endl;
    

    return 0;
}