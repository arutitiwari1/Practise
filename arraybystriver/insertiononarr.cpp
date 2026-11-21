#include<iostream>
using namespace std;
int main(){
    int arr[8]={10,20,30,50,60};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int pos;
    cout<<"pos";
    cin>>pos;
    int index=pos-1;
    int val;
    cout<<"enter value:";
    cin>>val;
    n=n+1;
    for(int i=n-1;i>=index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}