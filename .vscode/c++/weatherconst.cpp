#include <iostream>
using namespace std;

class weather {
    public:
    int day_month;
    float lowtemp;
    float hightemp;
    float amof_rain;
    float amof_snow;

    weather() {
        day_month=0;
        lowtemp=0;
        hightemp=0;
        amof_rain=0;
        amof_snow=0;
    }

        
    weather(int d,float lt,float ht,float r,float s) {
        day_month=d;
        lowtemp=lt;
        hightemp=ht;
        amof_rain=r;
        amof_snow=s;

    }
    void setdata() {
        cout<<"enter day of month:";
        cin>>day_month;
        cout<<"enter high temp:";
        cin>>hightemp;
        cout<<"enter low temp:";
        cin>>lowtemp;
        cout<<"enter amount of rain:";
        cin>>amof_rain;
        cout<<"enter amount of snow:";
        cin>>amof_snow;
    }
    float gethightemp() { return hightemp; }
    float getlowtemp()  { return lowtemp; }
    float getrain() { return amof_rain; }
    float getsnow() { return amof_snow; }
};


int main() {
    weather month[31];
    int choice,count=0;

do {
    cout<<"\n---weather report menu---\n";
    cout<<"1.enter daily weather data\n";
    cout<<"2,generate monthly report\n";
    cout<<"3.exit\n";
    cout<<"enter your choice:";
    cin>>choice;

    switch(choice) {

    case 1:
    {
        if(count<31) {
            month[count].setdata();
            count++;

    }
    else{
        cout<<"data for all 31 days already entered.\n";

    }
    break;

}
case 2:
{
if (count==0) {
    cout<<"no data enterd yet.\n";
    break;
} 
float totalhigh=0,totallow=0,totalrain=0,totalsnow=0;
for(int i=0;i<count;i++) {
    totalhigh +=month[i].gethightemp();
    totallow +=month[i].getlowtemp();
    totalrain +=month[i].getrain();
    totalsnow +=month[i].getsnow();

}
cout<<"\n---month weather report---\n";
cout<<"average high temperature:"<<totalhigh/count<<endl;
cout<<"average low temperature:"<<totallow/count<<endl;
cout<<"average rainfall:"<<totalrain/count<<endl;
cout<<"average snowfall:"<<totalsnow/count<<endl;
    
    break;
    }
    case 3: {
    cout<<"exit program.\n";
    break;
}

default:

    cout<<"invalid choice.\n";
}
}
while(choice!=3);
return 0;

}
