#include <iostream>
using namespace std;

class BankAccount 
{
private:
    int AccNo;
    float balance;
    int pass;
    void withdraw(float amount) 
    {
        if (amount > balance) 
        {
            cout << "Insufficient Balance!" << endl;
        } 
        else 
        {
            balance -= amount;
            cout << "Withdraw Successful! Remaining Balance: " << balance << endl;
        }
    }
    void deposit(float amount) 
    {
        balance += amount;
        cout << "Deposit Successful! New Balance: " << balance << endl;
    }
public:
    void setAcc(int Accno) 
    {
        AccNo = Accno;
    }

    void setBalance(float amount) 
    {
        balance = amount;
    }

    void setPass(int pin) 
    {
        pass = pin;
    }
    int getAcc()
    {
        return AccNo;
    }

    float getBalance()
    {
        return balance;
    }
    int getPass()
    {
        return pass;
    }
    void manageAccount() 
    {
        int pin;
        cout << "Enter your PIN: ";
        cin >> pin;

        if (pin == pass) 
        {
            int choice;
            do 
            {
                cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;
                if (choice == 1) 
                {
                    float amount;
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    deposit(amount);
                } 
                else if (choice == 2) 
                {
                    float amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                } 
                else if (choice == 3) 
                {
                    cout << "Your Current Balance: " << getBalance() << endl;
                } 
                else if (choice == 4) 
                {
                    cout << "Exiting. Thank you!" << endl;
                } 
                else 
                {
                    cout << "Invalid choice. Try again!" << endl;
                }
            } 
            while (choice != 4);
        } 
        else 
        {
            cout << "Incorrect PIN. Access denied!" << endl;
        }
    }
};
int main() 
{
    BankAccount account;
    int accountNumber, pin;
    float initialBalance;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    account.setAcc(accountNumber);
    cout << "Set a 4-digit PIN: ";
    cin >> pin;
    account.setPass(pin);
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    account.setBalance(initialBalance);
    cout << "\nAccount setup complete!" << endl;
    account.manageAccount();
    return 0;
}