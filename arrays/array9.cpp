#include<iostream>
using namespace std;//reverse array
void reverseArray(int arr[],int sz){
    int start=0,end=sz-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,5,3,77,44,22,35};
    int sz=7;
    reverseArray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;//35 22 44 77 3 5 4
    return 0;
}