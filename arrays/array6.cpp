#include<iostream>
using namespace std;
int main(){
    int arr[]={12,3,6,7,67};
    int size=5;
    int maxIndex=0,minIndex=0;
    for(int i=1;i<size;i++){
        if (arr[i]<arr[minIndex])
        minIndex=i;
        if (arr[i]>arr[maxIndex])
        maxIndex=i;
    }
    cout<<"largest index:"<<maxIndex<<endl;//4
    cout<<"smallest index:"<<minIndex<<endl;//1
    return 0;
}