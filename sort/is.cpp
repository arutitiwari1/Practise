#include<iostream>//insertion sort
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void insertionSort(int arr[],int n){
for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1;
    while (prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;//placing element curr in its correct pos
}
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    insertionSort(arr,n);
    printArray(arr,n);//1 2 3 4 5
    return 0;
}