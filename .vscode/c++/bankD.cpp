#include <iostream>
using namespace std;

class BankACC{
    string name;
    int bal;

    public:
    BankACC(string n,int b) {
        name=n;
        bal=b;
        cout<<"account created for"<<endl;
    }

    void dis(){
        cout<<"account holder:"<<name<<endl;
        cout<<"balance"<<bal<<endl;
    }
    ~BankACC() {
        cout<<"account of"<<name<<"is closed"<<endl;

    }
  
};

int main() {
    BankACC BA("Riya",50000);
    BA.dis();
    return 0;

}