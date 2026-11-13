#include<iostream>
#include<algorithm>
using  namespace std;
int main(){
int n;
cout<<"enter size:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter elements of array:";
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}