#include<iostream>
using namespace std;//find the maximum element in an array
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                continue;
            }else{
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }cout<<arr[0];
    return 0;
}