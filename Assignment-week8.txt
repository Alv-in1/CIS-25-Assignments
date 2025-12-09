#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Creating a class name BankAccount
class BankAccount {
    private:
        double balance;
    public:
        BankAccount(){
            balance = 0.0;
        }
        void deposit(double amount) {
            balance += amount;
            cout<<"Your current balcance is: "<< balance <<"\n";
        }
        void Purchase(string item, double price){
            if (price > balance){
                cout<<"funds insufficient.Your current balance is: "<< balance <<endl;
            } else {
                balance -= price;
                cout <<"Purchased "<< item <<endl;
                saveTransaction("Purchase - " + item, price);
            }
        }
        void DisplayBalance(){
            cout <<"Current balance: $"<<balance<<endl;
        }
        void saveTransaction( string type, double amount){
            ofstream file("transaction.txt", ios::app);
            if (file.is_open()){
                file<< type <<": $" << amount << endl;
                file.close();
            }
        }
};

//my main block
int main(){
    BankAccount myAccount;
    myAccount.deposit(1000.00);
    myAccount.Purchase("Airpod", 280.00);
    myAccount.Purchase("Apple Watch", 700.00);
    myAccount.DisplayBalance();
    return 0;
    
}


















