#include <iostream>
using namespace std;

int main(){
    int a[100];
    int i,j,c,n;
    cout<<"enter range:";
    cin>>n;
    cout<<"enter numbers\n";
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

            if(a[j]>a[j+1]){
            c=a[j+1];
            a[j+1]=a[j];
            a[j]=c;

        }
    }
}
cout<<"after sorting:\t";
for(i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}