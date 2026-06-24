#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class BankSystem {
private:
    // structure of an Account
    struct Account {
        long long account_number;
        string name;
        float balance;
    };
    
    // declared an fixed array
    Account accounts[1000];
    // declared a variable for count of accounts that has been created
    int totalAccounts;
    
    // created a function to find the account if exists
    int findAccount(long long accNo) {
        for (int i = 0; i < totalAccounts; i++) {
            if (accounts[i].account_number == accNo) {
                return i;
            }
        }
        return -1;
    }

    // function to generate acc number of 8 digit you can modify it
    long long generateAccountNumber() {
        long long accNo;
        bool exists;

        do {
            accNo = 10000000 + rand() % 90000000; // 8 digit random number
            exists = false;
            
            // function to check the acc num if already exists or not
            for (int i = 0; i < totalAccounts; i++) {
                if (accounts[i].account_number == accNo) {
                    exists = true;
                    break;
                }
            }
        } while (exists);

        return accNo;
    }

public:
    //constructor to set the value of totalAccounts
    BankSystem() {
        totalAccounts = 0;
    }
    
    // function to create new account
    void createAccount() {
        // check if the array is exhausted
        if (totalAccounts >= 1000) {
            cout << "Bank account storage full." << endl;
            return;
        }

        string name;
        cout << "Enter candidate name: ";
        cin.ignore();
        getline(cin, name);

        long long newAccNo = generateAccountNumber();  // called the accgen function
        
        // setting the data into array
        accounts[totalAccounts].account_number = newAccNo;
        accounts[totalAccounts].name = name;
        accounts[totalAccounts].balance = 0.0;

        cout << "\nAccount created successfully!" << endl;
        cout << "Account Holder Name : " << accounts[totalAccounts].name << endl;
        cout << "Account Number      : " << accounts[totalAccounts].account_number << endl;
        cout << "Balance             : Rs." << accounts[totalAccounts].balance << endl;

        totalAccounts++;
    }

    // function to get the account Details
    void viewAccount() {
        long long accNo;
        cout << "Enter account number: ";
        cin >> accNo;

        int i = findAccount(accNo);    // called findAccount function 
        // if the Account is exists or not
        if (i == -1) {
            cout << "Account not found." << endl;
            return;
        }

        cout << "\n******** Account Details ********" << endl;
        cout << "Account Holder Name : " << accounts[i].name << endl;
        cout << "Account Number      : " << accounts[i].account_number << endl;
        cout << "Balance             : Rs." << accounts[i].balance << endl;
    }
    
    // function to deposit the amount
    void deposit() {
        long long accNo;
        float amount;

        cout << "Enter account number: ";
        cin >> accNo;

        int i = findAccount(accNo);

        if (i == -1) {
            cout << "Account not found." << endl;
            return;
        }

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount." << endl;
            return;
        }

        accounts[i].balance += amount;

        cout << "Rs." << amount << " deposited successfully." << endl;
        cout << "Updated balance: Rs." << accounts[i].balance << endl;
    }

    void withdraw() {
        long long accNo;
        float amount;

        cout << "Enter account number: ";
        cin >> accNo;

        int i = findAccount(accNo);

        if (i == -1) {
            cout << "Account not found." << endl;
            return;
        }

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount." << endl;
            return;
        }

        if (amount > accounts[i].balance) {
            cout << "Insufficient balance." << endl;
            return;
        }

        accounts[i].balance -= amount;

        cout << "Rs." << amount << " withdrawn successfully." << endl;
        cout << "Remaining balance: Rs." << accounts[i].balance << endl;
    }

    void showAllAccounts() {
        if (totalAccounts == 0) {
            cout << "No accounts created yet." << endl;
            return;
        }

        cout << "\n===== All Bank Accounts =====" << endl;
        for (int i = 0; i < totalAccounts; i++) {
            cout << "\nAccount " << i + 1 << endl;
            cout << "Name           : " << accounts[i].name << endl;
            cout << "Account Number : " << accounts[i].account_number << endl;
            cout << "Balance        : Rs." << accounts[i].balance << endl;
        }
    }
};

int main() {
    // srand time to make the random number unique
    srand(time(0));

    BankSystem bank;
    int choice;

    do {
        cout << "\n********** Banking Management System **********" << endl;
        cout << "1. Open New Account" << endl;
        cout << "2. View Account Details" << endl;
        cout << "3. Deposit Amount" << endl;
        cout << "4. Withdraw Amount" << endl;
        cout << "5. Show All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.viewAccount();
                break;
            case 3:
                bank.deposit();
                break;
            case 4:
                bank.withdraw();
                break;
            case 5:
                bank.showAllAccounts();
                break;
            case 6:
                cout << "Logged out successfully." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}