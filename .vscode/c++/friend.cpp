#include <iostream>
using namespace std;
 class calculate{
    private:
    int len,brea;

    public:
    void getsize() {
        cout<<"enter length and breadht:";
        cin>>len>>brea;
    }
    friend void findnum(calculate obj) ;
};
    void findnum(calculate obj) {
        int area;
        
        area=obj.len*obj.brea;
        cout<<"area of rectangle"<<area;
  }
  int main() {
    calculate obj;
    obj.getsize();
    findnum(obj);
    return 0;
  }
 