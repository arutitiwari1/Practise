#include<iostream>//bubble sort in descending order
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }return;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};// 5 4 3 2 1
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}