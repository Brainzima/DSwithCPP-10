#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream Car("car.txt");
    string carname;
    while(getline(Car, carname)){
        std::cout << carname << std::endl;
    }
    
    fstream Bike("bike.txt");
    string bikename;
    while(getline(Bike, bikename)){
        std::cout << bikename << std::endl;
    }

    return 0;
}