#include<iostream>// peak index mountain array
#include<climits>
#include<vector>
using namespace std;
int peakIndexMountainArray(vector<int>&A){
    int st=1,end=A.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid-1]<A[mid]&&A[mid]>A[mid+1]){
            return mid;
        }else if(A[mid]<A[mid-1]){//right
            end=mid-1;
        }else{//left
            st=mid+1;
        
        }
    }
    return -1;
}
int main(){
    vector<int>A={0,3,8,9,5,2};
    cout<<peakIndexMountainArray(A)<<endl;//3
    return 0;
}