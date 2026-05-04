#include <iostream>
using namespace std;
//paramaterized

class Rect{
    private:
    int len,br;

    public:
    Rect(int l,int b) {
        len=l;
        br=b;

    }
    void getdata() {
        int area=len*br;
        cout<<"area of rectangle is"<<area;
    }
    
};
int main() {
    Rect s1(12,2);
    s1.getdata();
    return 0;
}