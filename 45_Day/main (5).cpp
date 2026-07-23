#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    
    string choise;
    std::cout << "We have multiple cars and bikes collection." << std::endl;
    std::cout << "What you like see? :";
    std::cin >> choise;
    if(choise == "Car"){
        std::cout << "Here's the collection of Cars:" << std::endl;
        fstream Car("car.txt");
        string carname;
        while(getline(Car, carname)){
            std::cout << carname << std::endl;
        }
    }else if(choise == "Bike"){
        std::cout << "Here's the collection of Bikes:" << std::endl;
        fstream Bike("bike.txt");
        string bikename;
        while(getline(Bike, bikename)){
            std::cout << bikename << std::endl;
        }
        
    }else{
        std::cout << "Sorry your request for "<< choise << " is not available. We have only Cars and Bikes!" << std::endl;
    }

    return 0;
}