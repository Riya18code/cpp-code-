#include <iostream>
using namespace std;

class number {
    public:
    int n;   //data memeber
    void getnum();  //funcn dec
    void findnum();

};

//funcn declaration outside the class
void number::getnum() {
    cout<<"enter no.";
    cin>>n;
}
void number::findnum() {
    if(n%2==0) {
        cout<<"number is even"<<n;
    }
    else {
        cout<<"number is odd"<<n;
    }
}
int main() {
    number obj;  //creating object 
    obj.getnum();
    obj.findnum();
    return 0;
}