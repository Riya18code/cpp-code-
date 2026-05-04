#include <iostream>
using namespace std;

class square{
    private:
    int len;
    public:
    void getsize() {
        cout<<"enter length:";
        cin>>len;

    }
    void findarea() {
        int area;
        area=len*len;
        cout<<"area of square is:"<<area<<endl;
    }
    friend class rectangle;
};
class rectangle {
    private:
    int brea;
    public:
    void getsizeb() {
        cout<<"enter breadth"<<endl;
        cin>>brea;

    }
    void Findarea(square s) {
        int Area;
        Area=s.len*brea;
        cout<<"Area of rectangle is:"<<Area;

    }

    };
int main() {
    square s;
    rectangle r;
    s.getsize();
    s.findarea();
    r.getsizeb();
    r.Findarea(s);

    return 0;
}