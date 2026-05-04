//multi-level inheritance example
#include <iostream>
using namespace std;
class organisation{  //base class for empl
    public:
    int id;
    float sal;
    public:
    void get() {
        cout<<"enter id:";
        cin>>id;
        cout<<"enter salary:";
        cin>>sal;
    }
};
class empl:public organisation {   //derived class for base class and base class for Emp(another derived class)
    public:
    string name;
    public:
    void show() {
        cout<<"enter name:";
        cin>>name;
    }
};
class Emp:public empl {      //derived class for empl
    public:
    void display(){
    cout<<"name of the employee is"<<name<<endl;
    cout<<"id of the employeee is:"<<id<<endl;
    cout<<"salary of the employee is:"<<sal<<endl;

}
};

int main() {   
    Emp e;
    e.get();     // function calling
    e.show();
    e.display();
    return 0;
}