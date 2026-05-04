#include <iostream>
using namespace std;

class stu{
    public:
    int roll;
    string name;
    int div;

    stu() {
        cout<<"enter roll no of student:";
        cin>>roll;
        cout<<"enter name";
        cin>>name;
        cout<<"enter division";
        cin>>div;

    }
    ~stu() {
        cout<<"object over"<<endl;
    }

};

int main() {
    stu s1;
cout<<"riyaa...."<<endl;
return 0;
}