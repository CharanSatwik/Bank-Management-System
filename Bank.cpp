#include <bits/stdc++.h>
using namespace std;
class Bank
{
private:
    string name, acc_type;
    long long int acc_num;
    int initial, deposit, withdraw;

public:
    Bank()
    {
        name = " ";
        acc_type = " ";
        initial = 0;
    }
    void menu();
    void deposit_money();
    void withdraw_money();
    void create();
    void display();
    void check();
};
void Bank::menu()
{
    int choice;
    cout << "\n";
    cout << "\t\t******Bank Management System****** \t\t" << endl;
    cout << "Choose from menu below." << endl;
    cout << "1.Create Account." << endl;
    cout << "2.Deposit money." << endl;
    cout << "3.Check balance." << endl;
    cout << "4.Withdraw money." << endl;
    cout << "5.Account holder's details." << endl;
    cout << "6.Exit." << endl;

    cin >> choice;
    switch (choice)
    {
    case 1:
        create();
        menu();
        break;
    case 2:
        deposit_money();
        menu();
        break;
    case 3:
        check();
        menu();
        break;
    case 4:
        withdraw_money();
        menu();
        break;
    case 5:
        display();
        menu();
        break;
    }
}
void Bank::create()
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> acc_num;
    cout << "Enter Account Type: ";
    cin >> acc_type;
    cout << "Account has been succesfully created." << endl;
}
void Bank::deposit_money()
{
    cout << "Enter money to be deposited: $";
    cin >> deposit;
    cout << "Current Balance: $" << initial + deposit << endl;
}
void Bank::check()
{
    initial += deposit;
    cout << "Total available balance: $" << initial << endl;
}
void Bank::withdraw_money()
{
    cout << "Enter amount you want to withdraw: $";
    cin >> withdraw;
    cout << "You have withdrew: $" << withdraw << endl;
    cout << "Current Balance: $" << initial - withdraw << endl;
}
void Bank::display()
{
    cout << "Transaction details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_num << endl;
    cout << "Account type: " << acc_type << endl;
    cout << "Total Deposit: $" << deposit << endl;
    cout << "Total Withdraw: $" << withdraw << endl;
    cout << "Available Balance: $" << initial - withdraw << endl;
}
int main()
{
    Bank b;
    b.menu();
    return 0;
}
