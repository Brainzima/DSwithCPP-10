#include <iostream>
using namespace std;
int main()
{
    string first_name = "Anshu";
    string last_name = "Keshri";
    
    std::cout << first_name <<" "<< last_name << std::endl;
    
    string fullname = first_name + " " + last_name;
    
    std::cout << fullname << std::endl;

    return 0;
}