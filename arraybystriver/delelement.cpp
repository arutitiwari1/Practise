#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos;
    cout<<"enter num you want to del:";
    cin>>pos;
    int index=pos-1;
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i];
    }
    return 0;
}