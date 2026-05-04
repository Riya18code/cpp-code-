#include <iostream>
using namespace std;

class BOOKS {
    private:
    int pg;
    string auth;

    public:
    void getpage() {
        cout<<"enter book page no:";
        cin>>pg;
    }
    void findauthor() {
        cout<<"enter name of author:";
        cin>>auth;
    }
    friend void show(BOOKS obj);

};
void show(BOOKS obj) {
    
    cout<<"pageno. of book is"<<obj.pg<<endl;
    cout<<"author name of book is:"<<endl<<obj.auth;
}
 int main() {
    BOOKS obj;
    obj.getpage();
    obj.findauthor();
     show(obj);
    return 0;
 }