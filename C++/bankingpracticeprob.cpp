//! Banking Problem
/*
we are going to create a banking program
we'll able to deposit money, withdraw money and show  balance
*/
#include <iostream>
#include<iomanip>
using namespace std;

// Functions

void Showbalance(double balance)
{
cout<< "This is your balance: " << fixed << setprecision(2) << balance << endl;
}

double deposit()
{
    int amount = 0;
    cout << "Enter Amount you want to deposit: " << endl;
    cin >> amount;
    if(amount > 0){
    return amount;
    }
    else{
        cout << "Invalid Amount" << endl;
        return 0;
    }
    return 0;
}

double withdraw(double balance)
{
    int amount = 0;
    cout << "Enter Amount you want to withdraw: " << endl;
    cin >> amount;
    if(amount > 0 && amount <= balance){
    return amount;
    }
    else{
        cout << "Invalid Amount" << endl;
        return 0;
    }
}
int main()
{
    double balance = 100;
    int choice = 0;
    cout << "CHOICES" << endl;
    cout << "*********************" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "*********************" << endl;
    do{
    cout << "\nEnter Your Choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        balance += deposit();
        Showbalance(balance);
        break;
    case 2:
        balance -= withdraw(balance);
        Showbalance(balance);
        break;
    case 3:
        Showbalance(balance);
        break;
    case 4:
    cout << "Thanks for visiting " << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
        break;
    }
}while(choice != 4);
return 0;
}

//std::cin.clear() function is used to clear the error state of the input stream.
//flush() is used to clear or flush the output buffer of the stream.