#include<iostream>//descending order of insertion sort
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){// i=1 coz we assume 1=0 is already sorted
    int curr=arr[i];
    int prev=i-1;
    while(prev>=0&&arr[prev]<curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;//placing correct ele at correct pos
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    insertionSort(arr,n);// 5 4 3 2 1
    printArray(arr,n);
    return 0;
}