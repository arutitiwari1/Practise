#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];
    int slargest=0;
    int ssmallest=0;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            slargest =largest;
            largest=arr[i];
        }
        else if(arr[i]<largest &&(arr[i]>slargest||slargest==0)){
            slargest=arr[i];
        }
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]>smallest && (arr[i]<ssmallest||ssmallest==0)){
            ssmallest=arr[i];
        }
    }cout<<largest<<","<<slargest<<endl;
    cout<<smallest<<","<<ssmallest<<endl;
    return 0;
}