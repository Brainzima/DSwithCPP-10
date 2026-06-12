// #include <iostream>
// using namespace std;
// class Teacher{
//     // int num;   by default the variable under the class is private
//     private:
//         int salary;
    
//     //we will create getter and setter method to access and modify the private variable
//     public:
//     // setter
//         void setSalary(int s){
//             salary = s;
//         };
//     //getter
//         int getSalary(){
//             return salary;
//         };
        
    
// };

// int main()
// {
//     Teacher myObj;
//     myObj.setSalary(50000);
//     std::cout << myObj.getSalary() << std::endl;

//     return 0;
// }







//user se set 
#include <iostream>
using namespace std;
class Teacher{
    // int num;   by default the variable under the class is private
    private:
        int salary;
    
    //we will create getter and setter method to access and modify the private variable
    public:
    // setter
        void setSalary(int s){
            salary = s;
        };
    //getter
        int getSalary(){
            return salary;
        };
        
    
};

int main()
{
    Teacher myObj;
    int salary;
    std::cout << "Enter the salary: ";
    std::cin >> salary;
    
    myObj.setSalary(salary);
    std::cout << "Your salary is " << myObj.getSalary() << std::endl;

    return 0;
}



