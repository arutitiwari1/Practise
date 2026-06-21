#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>unique;
    for(int i=0;i<n;i++){
        unique.insert(arr[i]); 
    }
    for(int value:unique){
        cout<<value<<" ";// 1 2 3 4 5
    }
    return 0;
}