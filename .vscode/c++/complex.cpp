#include <iostream>
using namespace std;

class complex{
    private:
    int real,imag;


public:
void getnum() {
    cout<<"enter real no.:";
    cin>>real;
    cout<<"enter imaginary part:";
    cin>>imag;
    cout<<real<<"+"<<imag<<"i"<<endl;
}
friend void show(complex c1,complex c2); 
};
void show(complex c1,complex c2) {
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"sum of two complex numbers is"<<c3.real<<"+"<<c3.imag<<"i"<<endl;
}
int main() {
    Complex c1,c2;

cout<<"first complex num is:"<<endl;
     c1.getnum();
    cout<<"second complex numbe is:"<<endl;
     c2.getnum();
     show(c1,c2);


    return 0;

}


    
