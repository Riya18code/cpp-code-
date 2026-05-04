#include <iostream>
using namespace std;

class time{
    protected:
    int hrs,mins;
};
class addtime:public time{
    private:
    int h1,m1,h2,m2;

public:
void gettime() {
    cout<<"enter first time (hours minutues):";
    cin>>h1>>m1;
    cout<<"enter second time (hours minutes):";
    cin>>h2>>m2;
}
void sum(){
    hrs=h1+h2;
    mins=m1+m2;

    if (mins>=60) {
        hrs+=mins/60;
        mins=mins%60;

    }

}
void display(){
    cout<<"total time is:"<<hrs<<"hours"<<mins<<"minutes";
}
};
int main() {
    addtime t;
    t.gettime();
    t.sum();
    t.display();
    return 0;
}


