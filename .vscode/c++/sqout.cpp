#include <iostream>
using namespace std;
 class square 
 {
    float len,area;
    public:
    void getlength();
    void findarea();
 };
 // function declaration outside class
void square::getlength() {
    cout<<"enter length";
    cin>>len;
}    
void square::findarea() {
     area=len*len;
    cout<<"area is"<<area;

}
int main() {
    square s;   //object dec
        s.getlength();  //funcn call
        
        s.findarea();
    
    return 0;
}

