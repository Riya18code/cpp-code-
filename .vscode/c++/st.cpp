#include <iostream>
#include <cstring>
using namespace std;
 class student {
    int roll;
    string name;
    float marks;
    public:
    void getdata()
    {
        cout<<"enter roll no:"<<roll<<"name is:"<<name<<"marks is:"<<marks;

    cin>>roll>>name>>marks;
    }
    void showdata()
    {
        cout<<"roll no:"<<roll<<"<<endl<<"name is:"<<name<<endl<<"marks is:"<<marks;
    }
    };
    
    int main() {
    student obj;
    obj.getdata();
    obj.showdata();
    return 0;
}

