#include<iostream>
using namespace std;
int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){//found
          return i;  //2
        }
        
    }
    return -1;
}
int main(){
    int arr[]={4,2,7,8,1,27,5};
    int sz=7;
    int target=7;
    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}