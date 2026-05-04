#include <iostream>
using namespace std;
 class square 
 {
    float len,area;
    public:  //inside class
    void getlength()
    {
        cout<<"enter length";
        cin>>len;
    }
    
    void findarea()
    {
area=len*len;
cout<<"area is="<<area;
    }
};
    int main()
    {
        square a; //object creation
    
    a.getlength();
    a.findarea();
    return 0;
    }

