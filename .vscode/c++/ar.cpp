#include<iostream>
using namespace std;
class largesmall {
public:
int i,n;
int arr[100];
public:
void getsize() {
    cout<<"enter size of an array";
    cin>>n;
}
void getelement() {
    cout<<"enter array element:";
    for(i=0;i<n;i++) {
    cin>>arr[i];
}
}
void findelements()
{
    int largest=arr[0];
    int smallest=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
cout<<"largest number="<<largest<<endl;
cout<<"smallest number="<<smallest;
}
};
int main() {
    largesmall obj;
    obj.getsize();
    
    obj.getelement();
    obj.findelements();
    return 0;
}


