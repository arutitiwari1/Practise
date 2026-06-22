#include<iostream>
#include<unordered_set>//while preserving order
using namespace std;
int main(){
    int arr[]={4,2,2,1,5,6,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    unordered_set<int>seen;
    for(int i=0;i<n;i++){
        if(seen.find(arr[i])==seen.end()){
            cout<<arr[i]<<" ";// 4 2 1 5 6
            seen.insert(arr[i]);
        }
    }
    return 0;
}
