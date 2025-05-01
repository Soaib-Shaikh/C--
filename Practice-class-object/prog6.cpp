#include<iostream>
using namespace std;

// Using Private and Public Access Specifiers

class BankAccount{
    private:
        double balance;
    
    public:
        void setbalance(double b){
            balance = b;
        }

        void showbalance(){
            cout<<"Balance is: $ "<<balance<<endl;
        }
   
};

int main(){
   BankAccount acc;

   acc.setbalance(10200);
   acc.showbalance();

    return 0;
}