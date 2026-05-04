#include <iostream>
using namespace std;

class student{
    private:
    int roll;
    string name;
    float marks;
    public:
    void getdetails() {
        cout<<"enter roll no:"<<endl;
        cin>>roll;
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter marks:";
        cin>>marks;

    }
    friend void finddata(student A);
};
void finddata(student A) {
    cout<<"roll no is"<<A.roll<<endl;
    cout<<"name is"<<A.name<<endl;
    cout<<"marks is"<<A.marks<<endl;

}
int main() {
    student A;
    A.getdetails();
    finddata(A);
    return 0;
}