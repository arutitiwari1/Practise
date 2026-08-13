#include<iostream>//bubble sort :tc=O(n^2)
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isSwap=false;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }if(!isSwap){
            return;//array is already sorted
        }
    }
}void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;// 1 2 3 4 5
}