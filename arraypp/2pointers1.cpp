#include<iostream>// brute force approach of target sum in array
#include<algorithm>
using namespace std;
int main(){
    int n,target;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements in array:"; 
        cin>>arr[i];
    }
    cout<<"enter target:";
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i]+arr[j];
            if(temp==target){
                cout<<"i:  "<<arr[i]<<endl;
                cout<<"j:  "<<arr[j]<<endl;
            }else{
                continue;
            }
        }
    }return 0;
}