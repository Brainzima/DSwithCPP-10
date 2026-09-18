/*
-Set always stores & gives the data in accending order
-it can't be access by the index number
-it always gives the value unique ignoring the duplicates
*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
  //by default set are always accending order
//   set<int> numbers = {45,40,35,50,10};
  
//   for (auto number : numbers) {
//       std::cout << number << std::endl;
//   }
  
//   set<string> names = {"Zaki", "Vimla", "Bahadur", "Rajik", "Apple", "Abdul"};
//   for (auto name : names) {
//       std::cout << name << std::endl;
//   }


// decsending order
//   set<int, greater<int>> numbers = {45,40,35,50,10};
  
//   for (auto number : numbers) {
//       std::cout << number << std::endl;
//   }


//   set<int> numbers = {45,40,35,50,10,50};
  
//   std::cout << numbers.size() << std::endl;
  
//   numbers.erase(35);
  
//   std::cout << numbers.size() << std::endl;
  
//   numbers.clear();
  
//   std::cout << numbers.size() << std::endl;
  
//   std::cout << numbers.empty() << std::endl;
  
  
//   for (auto number : numbers) {
//       std::cout << number << std::endl;
//   }



// ex:
// set<string> students = {"Rajik", "Sajik", "Najik", "Bajik"};
set<string> students = {};

if(students.empty()){
    std::cout << "No students data found!" << std::endl;
}else{
    std::cout << "We have found " << students.size() << " students:" << std::endl;
    int sn=1;
    for (auto st : students) {
        std::cout << sn << ". " << st << std::endl;
        sn++;
    }
    
}



    return 0;
}