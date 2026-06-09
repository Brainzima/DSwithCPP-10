// Procedural:
// #include <iostream>
// void greet(){
//     std::cout << "Hello Aliens.." << std::endl;
// };
// int main(){
//     greet();
//     return 0;
// }

// #include <iostream>
// // Method inside the class declare and define
// class Paneer{
//     public:
//         void greet(){
//             std::cout << "Hello Aliens.." << std::endl;
//         };
// };

// int main(){
//     Paneer myObj;
//     myObj.greet();

//     return 0;
// }


//  inside outside Methods 
// #include <iostream>
// // Method inside declare and defining outside of the class
// class Paneer{
//     public:
//         void greet();   // declared the Method
//         void sreet();
// };


// // defined the Method
// void Paneer::greet(){
//     std::cout << "Hello Aliens.." << std::endl;
// };

// void Paneer::sreet(){
//     std::cout << "Hello Jliens.." << std::endl;
// };

// int main(){
//     Paneer myObj;
//     myObj.greet();
//     myObj.sreet();

//     return 0;
// }

// constructors

// #include <iostream>
// // constructors will be called when we create an object of that class
// class Paneer{
//     public:
//         Paneer(){
//             std::cout << "Hello from constructors Method" << std::endl;
//         };   
// };

// int main(){
//   Paneer myObj;

//     return 0;
// }



//return keyword usecase
#include <iostream>
using namespace std;
class Paneer{
    public:
        string Hello(){
           return "Hello using return keyword";
        };   
};

int main(){
   Paneer myObj;
   std::cout << myObj.Hello() << std::endl;

    return 0;
}

