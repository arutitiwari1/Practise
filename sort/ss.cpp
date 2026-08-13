#include<iostream>//selection sort tc=O(n^2)
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallestIdx =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }swap(arr[i],arr[smallestIdx]);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;// 1 2 3 4 5 
}