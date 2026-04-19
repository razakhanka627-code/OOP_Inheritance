#include <iostream>
using namespace std;
class Account{
    private:
    int accountNumber;
    public:
    Account(int n){
        accountNumber=n;
    }
    int getNumber(){
        return accountNumber;
    }
};
class SavingsAccount:public Account{
    private:
    float balance;
    public:
    SavingsAccount(int n,float b):Account(n){
        balance=b;
    }
    float getBalance(){
        return balance;
    }
};
class PremiumSavings:public SavingsAccount{
    private:
    int interestRate;
    public:
    PremiumSavings(int n,float b,int rate):SavingsAccount(n,b){
        interestRate=rate;
    }
    void display(){
        cout<<"Account No :"<<getNumber()<<endl;
        cout<<"Balance :"<<getBalance()<<endl;
        cout<<"Interest :"<<interestRate<<"%"<<endl;
    }
};
int main(){
    PremiumSavings A1(112233,500000,10);
    A1.display();
}