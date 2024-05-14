#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    // Encapsulate data (private Attributes)
        string name;
        double balance;

    public:
        BankAccount(string name, double balance =0.00){
            this->name= name;
            this->balance= balance;
        }

        void deposit(int amount){
            if(amount>0){
                this->balance+=amount;
                cout<<"Deposite Successfull"<<endl;
            }
            else
                cout<<"Invalid Deposit amount"<<endl;
        }

        double getBalance(){
            return this->balance;
        }
};

int main(){
    
    BankAccount user1("Rakib Khan");
    cout<<user1.getBalance()<<endl;
    user1.deposit(100);
    cout<<user1.getBalance();
    return 0;
}