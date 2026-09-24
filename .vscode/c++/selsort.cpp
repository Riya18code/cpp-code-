#include <iostream>
using namespace std;

void selection(int arr[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<=n;j++){
            min=j;
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int i,n=5;
    int arr[5]={50,67,9,34,2};

    cout<<"unsorted array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    selection(arr,n);
    cout<<"sorted array:\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}