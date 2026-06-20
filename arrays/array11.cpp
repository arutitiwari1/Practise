#include<iostream>
using namespace std;
void swapMaxMin(int arr[],int n){
    int minIndex=0,maxIndex=0;
    //find position min and max
    for(int i=1;i<n;i++){
    if(arr[i]<arr[minIndex])
    minIndex=i;
    if(arr[i]>arr[maxIndex])
    maxIndex=i;
    }
    //swap values
    int temp=arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;
}
int main(){
    int arr[]={4,9,7,2,1};
    int n=5;
    swapMaxMin(arr,n);
    cout<<"array after swapping:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";//4 1 7 2 9
    return 0;
}