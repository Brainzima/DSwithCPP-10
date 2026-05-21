/*
structure just like array to store multiple data in one variable but difference between them is array can store only one datatype but structure can store multiple datatype

// int array[]={}

// struct{
    int var;
    string var;
    bool var;
}

*/
#include <iostream>
using namespace std;
int main()
{
    
    //anonymous structure
    struct {
        long int mobile;
        int pin;
        string name;
    } myStruct, Rajik;
    
    std::cout << myStruct.mobile << std::endl;
    myStruct.mobile = 7979864304;
    std::cout << myStruct.mobile << std::endl;
    Rajik.mobile = 6876854545;
    std::cout << Rajik.mobile << std::endl;
    
    
    // named structure
    struct car {
        string name;
        string company;
        int edition;
    };
    
    car rajik;
    rajik.name="Thar 420";
    rajik.company="Mahindra";
    rajik.edition = 2026;
    
    std::cout << rajik.name << std::endl;
    
    car anshu;
    anshu.name="BMW 501";
    anshu.company="VMCompany";
    anshu.edition = 2060;
    
    std::cout << anshu.company << std::endl;
    
    
    
    
    
    
    
    
    return 0;
}