/*
Enumeration (Enum) - A fixed listed items...

Enum ListName{
    item1,
    item2,
    item3
}

**Good practice to declare the items in uppercase

*/

#include <iostream>
// enum Speed {
//         LOW,
//         MEDIUM,
//         HIGH,
//         VERY_HIGH
//     };

// enum Speed {
//         LOW=85,
//         MEDIUM=78,
//         HIGH=545,
//         VERY_HIGH
//     };
    
// int main(){
//     enum Speed status=HIGH;
//     std::cout << status << std::endl;
    
    

//     return 0;
// }





// PROGRAM EXAMPLE

// enum Speed {
//         LOW=1,
//         MEDIUM,
//         HIGH,
//         VERY_HIGH
//     };
    
// int main(){
//     // enum Speed status=HIGH;
//     // std::cout << status << std::endl;
//     int userIn;
//     std::cout << "*************FAN is Running***************" << std::endl;
//     std::cout << "1. LOW" << std::endl;
//     std::cout << "2. MEDIUM" << std::endl;
//     std::cout << "3. HIGH" << std::endl;
//     std::cout << "4. VERY HIGH" << std::endl;
//     std::cout << "Choose the speed:" << std::endl;
//     std::cin >> userIn;
    
//     switch(userIn){
//         case 1:
//             std::cout << "Fan is ON with Speed of 'LOW'" << std::endl;
//             break;
//         case 2:
//             std::cout << "Fan is ON with Speed of 'MEDIUM'" << std::endl;
//             break;
//         case 3:
//             std::cout << "Fan is ON with Speed of 'HIGH'" << std::endl;
//             break;
//         case 4:
//             std::cout << "Fan is ON with Speed of 'VERY HIGH'" << std::endl;
//             break;
//         default:
//             std::cout << "Fan is OFF because you have choosen invalid option." << std::endl;
            
//     }
    
//     return 0;
// }



// REFERENCES
#include <string>
int main(){
    std::string lunch = "Murga Chawal";
    
    std::string &dinner = lunch;
    
    std::cout << lunch << std::endl;
    std::cout << dinner << std::endl;
    
    dinner = "Anda Chawal";
    
    std::cout << lunch << std::endl;
    std::cout << dinner << std::endl;
    
    
    return 0;
}


