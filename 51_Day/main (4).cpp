#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> names;
    names.push("Rajik");
    
    // std::cout << names[0] << std::endl;
    // std::cout << names.front() << std::endl;
    
    names.push("Anshu");
    names.push("Rajeev");
    names.push("Ranjan");
    names.push("Sanjeev");
    names.push("Kumesh");
    
    // std::cout << names.front() << std::endl;
    // std::cout << names.back() << std::endl;
    // std::cout << names.top() << std::endl; won't work
    // std::cout << names.down() << std::endl;  won't work
    
    // std::cout << names.size() << std::endl;
    
    // std::cout << names.front() << std::endl;
    // names.pop();
    // std::cout << names.front() << std::endl;
    // names.pop();
    // std::cout << names.front() << std::endl;
    // names.pop();
    // std::cout << names.front() << std::endl;
    // names.pop();
    // std::cout << names.front() << std::endl;
    // names.pop();
    // std::cout << names.front() << std::endl;
    // names.pop();
    
    // for (int i = 0; i < names.size()+names.size()+names.size(); i++) {
    //     std::cout << names.front() << std::endl;
    //     names.pop();
    // }
    
    // std::cout << names.empty() << std::endl;
    // std::cout << names.size() << std::endl;
    
    while(!names.empty()){
        std::cout << names.front() << std::endl;
        names.pop();
    }
    
    

    return 0;
}