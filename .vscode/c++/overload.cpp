#include<iostream>
using namespace std;

class rect{
    public:
    float len,brea;
    public:
    rect(){
        len=0;
        brea=0;
    }
    rect(float l,float b) {
        len=l;
        brea=b;
    }
    rect(float side){
        len=side;
        brea=side;
    }
    int area(){
         return len*brea;

    }
    void display() {
        cout<<"length is"<<len<<"breadth is"<<brea;
    }
};

int main() {
    rect r1;
    rect r2(2,5);
    r2.display();
    rect r3(3);
    r3.display();
    r2.area();
    return 0;
}


    
