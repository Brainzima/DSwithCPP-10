/*
friend function in class
*/
#include <iostream>
using namespace std;
class School{
    protected:
        string course;
        float school_fee;
    public:
        School(string a, float b){
            course = a;
            school_fee = b;
        }
        
        // declaration of friend function
        friend void display(School s);
};
// defining the friend function
void display(School s){
    std::cout << "----------------------------" << std::endl;
    std::cout << "Course Name: " << s.course << std::endl;
    std::cout << "School Fee: " << s.school_fee << std::endl;
    std::cout << "----------------------------" << std::endl;
};

// inheritance of a class
class AAM: public School{
    private:
        int students;
        int faculty;
    public:
        AAM(string a, float b, int c, int d) : School(a, b){
            students = c;
            faculty = d;
        }
        
        void allDisplay(){
            std::cout << "----------------------------" << std::endl;
            std::cout << "Faculties :" << faculty << std::endl;
            std::cout << "Students :" << students << std::endl;
            std::cout << "Course :" << course << std::endl;
            std::cout << "School Fee :" << school_fee << std::endl;
            std::cout << "----------------------------" << std::endl;
        }
};


int main()
{
    
    // School myObj("ADCA", 9500);
    // display(myObj);
    
    AAM myObj("ADCA", 5000, 50, 4);
    myObj.allDisplay();
    // display(myObj);
    return 0;
}