#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
void getnum(int r,int i) {
    real=r;
    imag=i;
    cout<<"real"<<"+"<<imag<<"i"<<endl;
}
friend void addcomplex(Complex c1, Complex c2);
};
void addcomplex(Complex c1,Complex c2) {
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"sum of two complex numbers is"<<c3.real<<"+"<<c3.imag<<"i"<<endl;
}

int main() {
    Complex c1,c2;

    cout<<"first complex number is:"<<endl;
     c1.getnum(2,4);
    cout<<"second complex numbe is:"<<endl;
     c2.getnum(3,5);
    addcomplex(c1,c2); //calling friend function

    return 0;

}