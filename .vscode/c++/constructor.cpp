#include <iostream>

using namespace std;
 class student{
    int roll;
    public:

    student(int r) {  //creating constructor same name as class // 
    // it is a special function of class that automatically gets called when an object is created
        roll=r;
        cout<<"roll no is"<<roll<<endl;

    }
 };

 int main() {
    student s1(103);
    return 0;
 }