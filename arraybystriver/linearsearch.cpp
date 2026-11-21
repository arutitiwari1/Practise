#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the num:";
    cin>>key;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            pos=i;
        }
    }if(pos!=-1){
        cout<<"element found at:"<<pos+1;
    }else{
        cout<<"not found";
    }
    return 0;
}