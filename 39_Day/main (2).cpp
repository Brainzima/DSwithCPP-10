/* 

Bank Account Manager

Create BankAccount class with: account_number, name, balance

Methods: deposit(), withdraw(), displayBalance()

Implement min balance check (₹500)

*/

#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    public:
        long int account_number;
        string name;
        float balance;
        
    BankAccount(long int a, string b, float c){
        account_number = a;
        name = b;
        balance = c;
    };
    
    void display(){
        std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
        std::cout << "Account Number : " << account_number << std::endl;
        std::cout << "A/c Holder Name : " << name << std::endl;
        std::cout << "Total Balance : " << balance << std::endl;
        std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    };
    
    void deposit(int amount){
        // balance = balance + amount;
        balance += amount;
        std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
        std::cout << "Rs."<< amount << "/- deposited!" << std::endl;
        std::cout << "Now your available balance is: Rs." << balance << "/-" << std::endl;
        std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
    };
    
    void withdraw(int amount){
        // balance = balance - amount;
        balance -= amount;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Rs."<< amount << "/- withdrawn!" << std::endl;
        std::cout << "Now your available balance is: Rs." << balance << "/-" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
    }
    
    
    
};
int main(){
    BankAccount person1(520120152, "Rakesh Jhunjhunwala", 1500);
    person1.display();
    person1.deposit(500);
    person1.withdraw(275);
    person1.withdraw(1500);
    if(person1.balance <500){
        std::cout << "Please deposit amount above 500 to avoid charges!" << std::endl;
    }
    
}