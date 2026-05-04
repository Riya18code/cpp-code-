#include <iostream>

using namespace std;
//default constructor
 class empl{
    int id;
    string name;
    float salary;

    public:
    empl() {
        cout<<"enter id"<<endl;;
        cin>>id;
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter salary"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"name of empl is:"<<name<<endl;
        cout<<"id of empl is:"<<id<<endl;
        cout<<"salary of empl is:"<<salary;
    }
};
int main() {
    empl E;
    E.display();
    return 0;
}