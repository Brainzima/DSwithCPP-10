#include <iostream>
#include <map>
using namespace std;
int main()
{
    //ex1
    
    // map<string,int> alienAge = {
    //     {"Rajik",50},
    //     {"Najik",100},
    //     {"Rajik",45}
    // };
    
    //  map<string,int> aliens = {{"Rajik",50},{"Najik",100},{"Kajik",45}};
    
    // std::cout << alienAge["Rajik"] << std::endl;
    
    
    
    // ex2:
    map<string,string> users = {
        {"user1","Ramesh"},
        {"user2","Suresh"},
        {"user3","Mahesh"}
    };
    
    std::cout << users["user2"] << std::endl;
    
    
    // adds if the keyname is unique otherwise will update the same if keyname matched
    users["user4"] = "Kumesh";
    
    std::cout << users["user4"] << std::endl;
    
    // remove the value with keyname
    users.erase("user4");
    
    std::cout << users["user4"] << std::endl;
    
    // add element using insert() function
    users.insert({"user5","Preetesh"});
    
    std::cout << users["user5"] << std::endl;
    
    //size()
    std::cout << users.size() << std::endl;
    
    std::cout << "--------------------------------------" << std::endl;
    // .first for the keyname and .second for the value
    // std::cout << users.["user1"].first << std::endl; wont work
    for (auto user : users) {
        std::cout << user.first << ":" << user.second << std::endl;
    }
    
    std::cout << "--------------------------------------" << std::endl;
    
    std::cout << users["user4"].empty() << std::endl;
    
    std::cout << "--------------------------------------" << std::endl;
    
    // display only data with values
     for (auto user : users) {
        // std::cout << user.second.empty()  << std::endl; 
        if(!user.second.empty()){
            std::cout << user.first << ":" << user.second << std::endl;
        }
    }
    
    std::cout << "--------------------------------------" << std::endl;
    
    
      for (auto user : users) {
        if(user.second.empty()){
            std::cout << "Iska Value nhi h" << std::endl;
        }else{
            std::cout << user.first << ":" << user.second << std::endl;
        }
    }
    return 0;
}