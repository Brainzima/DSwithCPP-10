// 1: Example of using Class, Object, with Public encapsulation

// #include <iostream>
// //declaring the class
// class Paper {
//     public:
//         int num=150;
// };

// int main() {
//     // creating object of class
//     Paper page;
    
//     std::cout << page.num << std::endl;

//     return 0;
// }

// 2: Book Declaring example 
#include <iostream>
using namespace std;
//declaring the class
class Book {
    public:
        string title;
        string author;
        int page;
        int pyear;
};

int main() {
    // creating object of class
    Book book1;
    book1.title = "Programming in C";
    book1.author = "M Rahman";
    book1.page = 595;
    book1.pyear = 1760;
    
    Book book2;
    book2.title = "Programming in JAVA";
    book2.author = "John Keliya";
    book2.page = 980;
    book2.pyear = 1250;
    
    std::cout << "--------------------------" << std::endl;
    std::cout << "Title: " << book1.title << std::endl;
    std::cout << "Author: " << book1.author << std::endl;
    std::cout << "Pages: " << book1.page << std::endl;
    std::cout << "Published Year: " << book1.pyear << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Title: " << book2.title << std::endl;
    std::cout << "Author: " << book2.author << std::endl;
    std::cout << "Pages: " << book2.page << std::endl;
    std::cout << "Published Year: " << book2.pyear << std::endl;
    std::cout << "--------------------------" << std::endl;
    

    return 0;
}