// // constructor with parameters 
// #include <iostream>
// using namespace std;
// class Bike{
//     public:
//         string name;
//         string model;
//         int pyear;
// };

// int main()
// {
//     Bike myObj1;
//     myObj1.name="Harley Davidson";
//     myObj1.model="X";
//     myObj1.pyear=2020;
    
//     std::cout << myObj1.name << std::endl;
    
//     Bike myObj2;
//     myObj2.name="Charley Davidson";
//     myObj2.model="Y";
//     myObj2.pyear=2025;
    
//     std::cout << myObj2.name << std::endl;

//     return 0;
// }





// // constructor with parameters 
// #include <iostream>
// using namespace std;
// class Bike{
//     public:
//         string name;
//         string model;
//         int pyear;
        
//         Bike(string a, string b, int c){
//             name = a;
//             model = b;
//             pyear = c;
//             // std::cout << name << " | " << model << " | " <<  pyear << std::endl;
            
//             std::cout << "----------------------------" << std::endl;
//             std::cout << "Name: " << name << std::endl;
//             std::cout << "Model: " << model << std::endl;
//             std::cout << "Published Year: " << pyear << std::endl;
//             std::cout << "----------------------------" << std::endl;
            
//             // std::cout << "----------------------------" << "\nName: " << name <<  "\nModel: " << model << "\nPublished Year: " << pyear << "\n----------------------------" << std::endl;
            
//         };
// };

// int main()
// {
//     Bike myObj1("Harley Davidson", "X", 2025);
//     Bike myObj2("TVS", "StarcityPlus", 2020);
//     Bike myObj3("TVS", "Apache", 1980);
    
//     std::cout << "Bike 1 name: " << myObj1.name << std::endl;
    
//     return 0;
// }



// constructor with parameters | constructor overloading
#include <iostream>
using namespace std;
class Bike{
    public:
        string name;
        string model;
        int pyear;
        int amount;
        
        Bike(){
            std::cout << "This object has no details!" << std::endl;
        }
        
        Bike(string a, string b, int c){
            name = a;
            model = b;
            pyear = c;
            
            std::cout << "----------------------------" << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Published Year: " << pyear << std::endl;
            std::cout << "----------------------------" << std::endl;
            
        };
        
        Bike(string a, string b, int c, int d){
            name = a;
            model = b;
            pyear = c;
            amount = d;
            
            std::cout << "----------------------------" << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Published Year: " << pyear << std::endl;
            std::cout << "Total Price: " << amount << std::endl;
            std::cout << "----------------------------" << std::endl;
            
        };
};

int main()
{
    Bike myObj1("Harley Davidson", "X", 2025);
    Bike myObj2("TVS", "StarcityPlus", 2020);
    Bike myObj3("TVS", "Apache", 1980);
    Bike myObj4;
    Bike myObj5("Royal Enfield", "Classic 350", 1770, 8540251);
    
    return 0;
}