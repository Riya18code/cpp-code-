#include <iostream>
using namespace std;

class rectangle {
    private:
    int len,brea,area;

    public:
    void getsize(){
        cout<<"enter length and breadth:";
        cin>>len>>brea;
    }
    friend void findArea(rectangle A);

};
void findArea(rectangle A) {
    int area;
    area=A.len*A.brea;
    cout<<"area of rectangle is:"<<area;
}
int main(){
    rectangle A;
    A.getsize();
    findArea(A);
    return 0;
}

    
